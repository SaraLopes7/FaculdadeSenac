import { Link } from 'react-router-dom'
import './Login.css'
// import Cadastro from "./Cadastro";

function Login () {
    return (
      <div className='login'>
        <div id="login-usuario">
                        <form>
                            <div className="campos">
                                <label for="">Email: </label>
                                <input type="email" placeholder="ex: meunome@email.com"></input>
                            </div>
                            <div className="campos">
                                <label for="">Senha: </label>
                                <input type="password" placeholder="Minímo: 8 caracteres"></input>
                            </div>
                            <button type="submit">Login</button>
                        </form>
                    </div>
          <Link to="/Cadastro.js">Não possuo cadastro</Link>
      </div>  
    )
}

export default Login;