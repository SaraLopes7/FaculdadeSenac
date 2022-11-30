import { Link } from 'react-router-dom'
import './Header.css'
// import Login from './Login';

function Header () {
    return (
    <div>
        <nav>
            <h2>Paróquia da Torre</h2>
            <ul>
                <li><Link to="/Body#SobreNos">Sobre Nós</Link></li>
                <li><Link to="/Body.js#VisiteNos">Visite-Nos</Link></li>
                <li><Link to="/Body">F.A.Q</Link></li>
                <li><Link to="/Body">Doar</Link></li>
                <li><Link to="/Login">Olá, Usuário</Link></li>
            </ul>
        </nav>
    </div>  
    )
}

export default Header;