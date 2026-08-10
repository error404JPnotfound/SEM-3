import React from 'react';
import { mockMovies } from '../data/mockmovies';

function Home() {
  return (
    <div className="bg-dark text-white min-vh-100">
      {/* 1. Header/Navbar */}
      <nav className="navbar navbar-dark bg-black px-4 py-3">
        <span className="navbar-brand fw-bold text-warning fs-3">🎬 MovieVerse</span>
      </nav>

      {/* 2. Grid Section of Movies */}
      <div className="container my-5">
        <h2 className="text-warning mb-4">Trending Movies</h2>
        <div className="row g-4">
          {mockMovies.map((movie) => (
            <div key={movie.id} className="col-12 col-sm-6 col-md-4 col-lg-3">
              {/* Bootstrap Movie Card */}
              <div className="card bg-secondary text-white h-100">
                <img src={movie.poster} className="card-img-top" alt={movie.title} />
                <div className="card-body">
                  <h5 className="card-title">{movie.title}</h5>
                  <p className="card-text text-warning">⭐ {movie.rating}</p>
                </div>
              </div>
            </div>
          ))}
        </div>
      </div>
    </div>
  );
}

export default Home;
