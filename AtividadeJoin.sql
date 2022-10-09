USE postoinflamavel;

-- Elabore os scripts SQL (DQL - Usem Join) para os 12 relatórios solicitados a seguir usando seus conhecimentos em SQL-DQL: --

/* Relatório 1 - Lista dos empregados admitidos entre 2019-01-01 e 2022-03-31, 
** trazendo as colunas (Nome Empregado, CPF Empregado, Data Admissão,  Salário, Cidade Moradia, Número de Telefone), 
** ordenado por data de admissão decrescente; */ -- FEITO --
-- endereco > empregado > telefone -- 

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.dataAdm "Data Admissao", em.salario "Salario Empregado", en.cidade "Cidade Moradia", t.numero "Numero Telefone"
	FROM endereco AS en
		JOIN empregado AS em ON em.CPF =  en.Empregado_CPF
		JOIN telefone AS t ON t.Empregado_CPF = em.CPF
			WHERE dataAdm BETWEEN '2019-01-01' AND '2022-03-31'
			ORDER BY dataAdm DESC;
            
/* Relatório 2 - Lista dos empregados que ganham menos que a média salarial dos funcionários do Posto de Gasolina,
** trazendo as colunas (Nome Empregado, CPF Empregado, Data Admissão,  Salário, Cidade Moradia), 
** ordenado por nome do empregado; */ -- FEITO --

-- endereco > empregado --  

SELECT AVG(em.salario) "Media salarial" FROM empregado AS em;

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.dataAdm "Data Admissao", em.salario "Salario Empregado", en.cidade "Cidade Moradia"
	FROM endereco AS en 
		JOIN empregado AS em ON em.CPF = en.Empregado_CPF
			WHERE em.salario < (SELECT AVG(em.salario) "Media salarial" FROM empregado AS em)
			ORDER BY em.nome;

/* Relatório 3 - Lista dos empregados que são da cidade do Recife e possuem dependentes, 
** trazendo as colunas (Nome Empregado, CPF Empregado, Data Admissão,  Salário, Cidade Moradia, Quantidade de Dependentes),
** ordenado por nome do empregado; */ -- FEITO --

-- endereco > empregado > dependentes --

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.dataAdm "Data Admissao", em.salario "Salario Empregado", en.cidade "Cidade Moradia", COUNT(d.cpf) "Quantidade de Dependentes"
	FROM endereco AS en
		JOIN empregado AS em ON en.Empregado_CPF = em.CPF
        JOIN dependente AS d ON em.CPF = d.Empregado_CPF
			WHERE en.cidade = "Recife" 
            GROUP BY em.CPF
            ORDER BY em.nome;
/*             
SELECT em.nome, em.CPF, d.nome, d.cpf 
	FROM empregado AS em
		LEFT OUTER JOIN dependente AS d ON em.CPF = d.Empregado_CPF
			ORDER BY em.nome;
            
SELECT COUNT(d.cpf) FROM dependente AS d;  
*/

/* Relatório 4 - Lista dos empregados com a quantidade total de vendas já realizadas por cada Empregado,
** trazendo as colunas (Nome Empregado, CPF Empregado, Sexo, Salário, Quantidade Vendas, Total Valor Vendido),
** ordenado por quantidade total de vendas realizadas; */ -- FEITO --

-- empregado > vendas -- 

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.sexo "Sexo", em.salario "Salario Empregado", COUNT(v.idVendas) "Quantidade de Vendas", SUM(v.valorTotal)
	FROM empregado AS em 
		JOIN vendas AS v ON em.CPF = v.Empregado_CPF
				GROUP BY em.CPF
                ORDER BY COUNT(v.idVendas);

/* Relatório 5 - Lista dos empregados que trabalham em cada departamento,
** trazendo as colunas (Nome Empregado, CPF Empregado, Salário, Nome da Ocupação, Número do Telefone do Empregado, Nome do Departamento, Local do Departamento, Número de Telefone do Departamento, Nome do Gerente),
** ordenado por nome do Departamento; */

-- empregado > trabalhar > ocupacao > trabalhar > departamento > telefone > empregado   -- 

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.salario "Salário Empregado", o.nome "Nome da Ocupação", t.numero "Número Telefone Empregado", d.nome "Nome Departamento", d.localDep "Local Departamento", t.numero "Número Telefone Departamento", em.nome "Nome Gerente"
	FROM empregado AS em 
		JOIN trabalhar AS ta ON em.CPF = ta.Empregado_CPF 
        JOIN ocupacao AS o ON ta.Ocupacao_cbo = o.cbo 
        JOIN trabalhar ON o.cbo = ta.Ocupacao_cbo
        JOIN departamento AS d ON ta.Departamento_idDepartamento = d.idDepartamento
        JOIN telefone AS t ON d.idDepartamento = t.Departamento_idDepartamento
		JOIN empregado ON t.Empregado_CPF = em.CPF
			ORDER BY d.nome;
            
/*
Nome Empregado, > empregado 
CPF Empregado, > empregado 
Salário, > empregado 
Nome da Ocupação, > ocupacao
Número do Telefone do Empregado, > telefone 
Nome do Departamento, > departamento 
Local do Departamento, > departamento 
Número de Telefone do Departamento, > telefone 
Nome do Gerente, > empregado 
empregado > telefone > departamento > trabalhar > ocupacao */

SELECT em.nome "Nome Empregado", em.CPF "CPF Empregado", em.salario "Salário Empregado", o.nome "Nome da Ocupação", t.numero "Número Telefone Empregado", 
d.nome "Nome Departamento", d.localDep "Local Departamento", t.numero "Número Telefone Departamento", em.nome "Nome Gerente"
FROM empregado AS em 
	JOIN telefone AS t ON em.CPF = t.Empregado_CPF
    JOIN departamento AS d ON t.Departamento_idDepartamento = d.idDepartamento
    JOIN trabalhar AS ta ON d.idDepartamento = ta.Departamento_idDepartamento
    JOIN ocupacao AS o ON Ocupacao_cbo = o.cbo;
            
/* Relatório 6 - Lista dos departamentos contabilizando o número total de empregados por departamento,
** trazendo as colunas (Nome Departamento, Local Departamento, Total de Empregados do Departamento, Nome do Gerente, Número do Telefone do Departamento),
** ordenado por nome do Departamento; */ -- FEITO -- 
-- gerente > empregado > telefone > departamento --

SELECT d.nome "Departamento", d.localDep "Local", COUNT(em.CPF) "Quantidade de empregados", em.nome "Nome do gerente", t.numero "Numero departamento"
	FROM gerente AS g 
		RIGHT JOIN empregado AS em ON g.Empregado_CPF = em.CPF
        JOIN trabalhar AS ta ON em.CPF = ta.Empregado_CPF
		JOIN departamento AS d ON ta.Departamento_idDepartamento = d.idDepartamento
        LEFT JOIN telefone AS t ON d.idDepartamento = t.Departamento_idDepartamento
			GROUP BY d.nome
					ORDER BY d.nome;
/*
SELECT * FROM departamento;
SELECT * FROM telefone;
SELECT * FROM empregado; -- existem 13 funcionarios 

select em.nome, d.idDepartamento, d.nome
from empregado as em 
join trabalhar as ta on em.CPF = ta.Empregado_CPF
join departamento as d on ta.Departamento_idDepartamento = d.idDepartamento
order by em.nome; -- tem funcinario que trabalha em dois departamentos, por isso ta dando 15 --
*/

/* Relatório 7 - Lista das formas de pagamentos mais utilizadas nas Vendas, informando quantas vendas cada forma de pagamento já foi relacionada,
** trazendo as colunas (Tipo Forma Pagamento, Quantidade Vendas, Total Valor Vendido),
** ordenado por quantidade total de vendas realizadas; */ -- FEITO -- 
-- vendas > forma de pagamento -- 

SELECT pa.tipoPag "Forma de pagamento", COUNT(v.idVendas) "Quantidade vendas", SUM(v.valorTotal) "Valor total"
	FROM vendas AS v 
		JOIN formapag AS pa ON v.idVendas = pa.Vendas_idVendas
			GROUP BY pa.tipoPag
				ORDER BY COUNT(v.idVendas);

/* Relatório 8 - Lista das Vendas, informando o detalhamento de cada venda quanto os seus itens,
** trazendo as colunas (Data Venda, Nome Produto, Quantidade ItensVenda, Valor Produto, Valor Total Venda, Nome Empregado, Nome do Departamento),
** ordenado por Data Venda; */ -- FEITO, mas acho q ta errado -- 
-- estoque > itensvenda > venda > empregado > trabalhar > departamento --

select * from itensvenda; -- a qtdProduto ta estranha dms --
select * from vendas;
select * from estoque; -- o valor ta estranho, boy

SELECT v.dataVenda "Data venda", e.nome "Produto", COUNT(iv.Estoque_idProduto) "Quantidade Itens", e.valor "Preço produto", v.valorTotal "Total venda", em.nome "Nome vendedor", d.nome "Departamento"
	FROM estoque AS e 
		JOIN itensvenda AS iv ON e.idProduto = iv.Estoque_idProduto
        JOIN vendas AS v ON iv.Vendas_idVendas = v.idVendas
        JOIN empregado AS em ON v.Empregado_CPF = em.CPF
        JOIN trabalhar AS ta ON em.CPF = ta.Empregado_CPF
        JOIN departamento AS d ON ta.Departamento_idDepartamento = d.idDepartamento
			GROUP BY v.dataVenda
			ORDER BY v.dataVenda;
        
/* Relatório 9 - Balanço das Vendas, informando a soma dos valores vendidos por dia,
** trazendo as colunas (Data Venda, Quantidade de Vendas, Valor Total Venda),
** ordenado por Data Venda; */ -- FEITO -- 
-- venda -- 

SELECT dataVenda "Data venda", COUNT(idVendas) "Quantidade vendas", SUM(valorTotal) "Valor total"
	FROM vendas
		GROUP BY SUBSTRING(dataVenda, 1, 10)
		ORDER BY dataVenda;

SELECT * FROM vendas;

/* Relatório 10 - Lista dos Produtos, informando qual Fornecedor de cada produto,
** trazendo as colunas (Nome Produto, Valor Produto, Categoria do Produto, Nome Fornecedor, Email Fornecedor, Telefone Fornecedor),
** ordenado por Nome Produto; */ -- FEITO -- 
-- estoque > compras > fornecedor > telefone --

/* SELECT * FROM estoque ORDER BY nome; -- existem 14 produtos -- */

SELECT e.nome "Produto", e.valor "Valor", e.categoria "Categoria", f.nome "Nome fornecedor", f.email "Email fornecedor", t.numero "Numero fornecedor"
	FROM estoque AS e
		JOIN compras AS c ON e.idProduto = c.Estoque_idProduto
        JOIN fornecedor AS f ON c.`Fornecedor_cnpj/cpf` = f.`cnpj/cpf`
		LEFT JOIN telefone AS t ON f.`cnpj/cpf` = t.`Fornecedor_cnpj/cpf`
			ORDER BY e.nome;

/* Relatório 11 - Lista dos Produtos mais vendidos, informando a quantidade (total) de vezes que cada produto participou em vendas,
** trazendo as colunas (Nome Produto, Quantidade (Total) Vendas),
** ordenado por quantidade de vezes que o produto participou em vendas; */
-- estoque > itensvenda > vendas -- 

SELECT * FROM itensvenda;

SELECT e.nome "Produto", COUNT(iv.Vendas_idVendas) "Quantidade"
	FROM estoque AS e 
		JOIN itensvenda AS iv ON e.idProduto = iv.Estoque_idProduto
        JOIN vendas AS v ON iv.Vendas_idVendas = v.idVendas
			GROUP BY e.nome
			ORDER BY COUNT(iv.Vendas_idVendas);

/* Relatório 12 - Lista das vendas por departamentos contabilizando o número total de vendas por departamento,
** trazendo as colunas (Nome Departamento, Local Departamento, Nome do Gerente,  Total de Vendas,  Valor Total das Vendas),
** ordenado por nome do Departamento; */ -- FEITO --
-- departamento > trabalhar > empregado > vendas --

SELECT * FROM vendas;

SELECT d.nome "Nome departamento", d.localDep "Local", em.nome "Nome gerente", COUNT(v.idVendas) "Vendas", SUM(v.valorTotal) "Valor"
	FROM departamento AS d
		JOIN trabalhar AS ta ON d.idDepartamento = ta.Departamento_idDepartamento
        JOIN empregado AS em ON ta.Empregado_CPF = em.CPF
        JOIN vendas AS v ON em.CPF = v.Empregado_CPF
			GROUP BY d.nome 
            ORDER BY d.nome
