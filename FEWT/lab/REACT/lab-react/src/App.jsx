import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import Header from './component/Header'
import Home from './Pages/Home'

function App() {
    return (
        <Router>
            <Header />
            <main>
                <Routes>
                    <Route path="/" element={<Home />} />
                </Routes>
            </main>
        </Router>
    );
}

export default App;
