import './Cadastro.css'

function Cadastro () {
    return (
      <div>
          <div id="cadastro-usuario">
            <form>
                <div class="campos">
                    <label for="">Nome Completo: </label>
                    <input type="text" placeholder="Nome Completo" required></input>
                </div>
                <div class="campos">
                    <label for="">Email: </label>
                    <input type="email" placeholder="ex: meunome@email.com" autocomplete="email" required></input>
                </div>
                <div class="campos">
                    <label for="">CPF: </label>
                    <input type="number" placeholder="XXX.XXX.XXX–XX" required></input>
                </div>
                <div class="campos">
                    <label for="">Telefone: </label>
                    <input type="number" placeholder="(XX) XXXXX-XXXX"></input>
                </div>
                <div class="campos">
                    <label for="">Senha: </label>
                    <input type="password" placeholder="Minímo: 8 caracteres" required></input>
                </div>
                <div class="campos">
                    <label for="">Confirmar Senha: </label>
                    <input type="password" placeholder="Minímo: 8 caracteres" required></input>
                </div>
                <button type="submit">Cadastro</button>
            </form>
        </div>
      </div>  
    )
}

export default Cadastro;