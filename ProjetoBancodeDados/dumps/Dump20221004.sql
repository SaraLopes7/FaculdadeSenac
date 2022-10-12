CREATE DATABASE  IF NOT EXISTS `editora` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `editora`;
-- MySQL dump 10.13  Distrib 8.0.30, for Win64 (x86_64)
--
-- Host: localhost    Database: editora
-- ------------------------------------------------------
-- Server version	8.0.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `autores`
--

DROP TABLE IF EXISTS `autores`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `autores` (
  `area_Literaria` varchar(45) DEFAULT NULL,
  `CPF_Pessoas_Autores` int NOT NULL,
  KEY `CPF_Pessoas_Autores` (`CPF_Pessoas_Autores`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `autores`
--

LOCK TABLES `autores` WRITE;
/*!40000 ALTER TABLE `autores` DISABLE KEYS */;
/*!40000 ALTER TABLE `autores` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `departamentos`
--

DROP TABLE IF EXISTS `departamentos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `departamentos` (
  `Id_Departamento` tinyint NOT NULL AUTO_INCREMENT,
  `nome_Departamento` varchar(45) NOT NULL,
  `CNPJ_Editora` int NOT NULL,
  `Id_Gerente` tinyint NOT NULL,
  PRIMARY KEY (`Id_Departamento`),
  KEY `CNPJ_Editora` (`CNPJ_Editora`),
  KEY `Id_Gerente` (`Id_Gerente`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `departamentos`
--

LOCK TABLES `departamentos` WRITE;
/*!40000 ALTER TABLE `departamentos` DISABLE KEYS */;
/*!40000 ALTER TABLE `departamentos` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `editora`
--

DROP TABLE IF EXISTS `editora`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `editora` (
  `CNPJ` int NOT NULL,
  `endereco` varchar(45) NOT NULL,
  `nome` varchar(45) NOT NULL,
  `enderecos_CNPJ_Livrarias` int NOT NULL,
  PRIMARY KEY (`CNPJ`),
  KEY `enderecos_CNPJ_Livrarias` (`enderecos_CNPJ_Livrarias`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `editora`
--

LOCK TABLES `editora` WRITE;
/*!40000 ALTER TABLE `editora` DISABLE KEYS */;
/*!40000 ALTER TABLE `editora` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `enderecos`
--

DROP TABLE IF EXISTS `enderecos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `enderecos` (
  `CEP` int NOT NULL,
  `UF` char(2) NOT NULL,
  `cidade` varchar(45) NOT NULL,
  `bairro` varchar(45) NOT NULL,
  `logradouro` varchar(60) NOT NULL,
  `numero` int NOT NULL,
  `complemento` varchar(45) DEFAULT NULL,
  `CNPJ_Livrarias` int NOT NULL,
  KEY `CNPJ_Livrarias` (`CNPJ_Livrarias`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `enderecos`
--

LOCK TABLES `enderecos` WRITE;
/*!40000 ALTER TABLE `enderecos` DISABLE KEYS */;
/*!40000 ALTER TABLE `enderecos` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `exemplares`
--

DROP TABLE IF EXISTS `exemplares`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `exemplares` (
  `titulo` varchar(60) NOT NULL,
  `Id_Exemplar` int NOT NULL,
  `genero` varchar(45) NOT NULL,
  `tipo` varchar(45) NOT NULL,
  `numero_Paginas` int NOT NULL,
  `CNPJ_Editora` int NOT NULL,
  PRIMARY KEY (`Id_Exemplar`),
  KEY `CNPJ_Editora` (`CNPJ_Editora`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `exemplares`
--

LOCK TABLES `exemplares` WRITE;
/*!40000 ALTER TABLE `exemplares` DISABLE KEYS */;
/*!40000 ALTER TABLE `exemplares` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `exemplares_autores`
--

DROP TABLE IF EXISTS `exemplares_autores`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `exemplares_autores` (
  `CPF_Pessoas_Autores` int NOT NULL,
  `Id_Exemplar` int NOT NULL,
  `CNPJ_Editora` int NOT NULL,
  KEY `CPF_Pessoas_Autores` (`CPF_Pessoas_Autores`),
  KEY `Id_Exemplar` (`Id_Exemplar`),
  KEY `CNPJ_Editora` (`CNPJ_Editora`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `exemplares_autores`
--

LOCK TABLES `exemplares_autores` WRITE;
/*!40000 ALTER TABLE `exemplares_autores` DISABLE KEYS */;
/*!40000 ALTER TABLE `exemplares_autores` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `funcionarios`
--

DROP TABLE IF EXISTS `funcionarios`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `funcionarios` (
  `salario` decimal(6,2) NOT NULL,
  `data_Admissao` datetime NOT NULL,
  `data_Demissao` datetime DEFAULT NULL,
  `data_Nascimento` date DEFAULT NULL,
  `CPF_Pessoas_Funcionarios` int NOT NULL,
  KEY `CPF_Pessoas_Funcionarios` (`CPF_Pessoas_Funcionarios`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `funcionarios`
--

LOCK TABLES `funcionarios` WRITE;
/*!40000 ALTER TABLE `funcionarios` DISABLE KEYS */;
/*!40000 ALTER TABLE `funcionarios` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `funcionarios_departamentos`
--

DROP TABLE IF EXISTS `funcionarios_departamentos`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `funcionarios_departamentos` (
  `Id_Departamento` tinyint NOT NULL,
  `CNPJ_Editora` int NOT NULL,
  `CPF_Pessoas_Funcionarios` int NOT NULL,
  `ocupacao_CBO` int NOT NULL,
  KEY `Id_Departamento` (`Id_Departamento`),
  KEY `CNPJ_Editora` (`CNPJ_Editora`),
  KEY `CPF_Pessoas_Funcionarios` (`CPF_Pessoas_Funcionarios`),
  KEY `ocupacao_CBO` (`ocupacao_CBO`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `funcionarios_departamentos`
--

LOCK TABLES `funcionarios_departamentos` WRITE;
/*!40000 ALTER TABLE `funcionarios_departamentos` DISABLE KEYS */;
/*!40000 ALTER TABLE `funcionarios_departamentos` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `gerentes`
--

DROP TABLE IF EXISTS `gerentes`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `gerentes` (
  `funcao_Gratificada` decimal(6,2) NOT NULL,
  `Id_Gerente` tinyint NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`Id_Gerente`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `gerentes`
--

LOCK TABLES `gerentes` WRITE;
/*!40000 ALTER TABLE `gerentes` DISABLE KEYS */;
/*!40000 ALTER TABLE `gerentes` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `livrarias`
--

DROP TABLE IF EXISTS `livrarias`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `livrarias` (
  `nome` varchar(45) NOT NULL,
  `CNPJ` int NOT NULL,
  `telefone` int NOT NULL,
  `departamentos_Id_Departamento` tinyint NOT NULL,
  `departamentos_CNPJ_Editora` int NOT NULL,
  `departamentos_gerentes_Id_Gerentes` tinyint NOT NULL,
  PRIMARY KEY (`CNPJ`),
  KEY `departamentos_Id_Departamento` (`departamentos_Id_Departamento`),
  KEY `departamentos_CNPJ_Editora` (`departamentos_CNPJ_Editora`),
  KEY `departamentos_gerentes_Id_Gerentes` (`departamentos_gerentes_Id_Gerentes`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `livrarias`
--

LOCK TABLES `livrarias` WRITE;
/*!40000 ALTER TABLE `livrarias` DISABLE KEYS */;
/*!40000 ALTER TABLE `livrarias` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ocupacao`
--

DROP TABLE IF EXISTS `ocupacao`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ocupacao` (
  `CBO` int NOT NULL,
  `funcao` varchar(45) NOT NULL,
  PRIMARY KEY (`CBO`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ocupacao`
--

LOCK TABLES `ocupacao` WRITE;
/*!40000 ALTER TABLE `ocupacao` DISABLE KEYS */;
/*!40000 ALTER TABLE `ocupacao` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pessoas`
--

DROP TABLE IF EXISTS `pessoas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pessoas` (
  `nome` varchar(60) NOT NULL,
  `CPF_pessoas` int NOT NULL,
  `telefone` int DEFAULT NULL,
  `email` varchar(45) NOT NULL,
  `sexo` char(2) DEFAULT NULL,
  `nome_Social` varchar(60) DEFAULT NULL,
  `enderecos_CNPJ_Livrarias` int NOT NULL,
  PRIMARY KEY (`CPF_pessoas`),
  KEY `enderecos_CNPJ_Livrarias` (`enderecos_CNPJ_Livrarias`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pessoas`
--

LOCK TABLES `pessoas` WRITE;
/*!40000 ALTER TABLE `pessoas` DISABLE KEYS */;
/*!40000 ALTER TABLE `pessoas` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-10-04 21:37:44
