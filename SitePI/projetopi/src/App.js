import './App.css';
import {BrowserRouter as Router, Routes, Route} from 'react-router-dom'
import Header from './Header'
import Body from './Body'
import Footer from './Footer'

function App() {
  return (
    <div>
        <Router>
          <header>
            <Header/>
          </header>
          <body>
            <Routes>
              <Route path='/Body' element={<Body/>}/>
            </Routes>
          </body>
          <footer>
            <Footer/>
          </footer>
        </Router>
    </div>
  );
}

export default App;

