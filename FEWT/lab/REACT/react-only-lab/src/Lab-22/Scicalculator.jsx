import React from 'react'

function Scicalculator() {
  const [input, setInput] = useState("");
      // const [result, setResult] = useState("");
      const handleClick = value => {
          setInput(prev => prev + value);
      };
      const handleClear = () => {
          setInput("");
          setResult("");
      };
      const handleDelete = () => {
          setInput(input.slice(0, -1));
      };
      const handleCalculate = () => {
          const evaluated = eval(input);
          setInput(String(evaluated));
      };
      return (
          <>
              <div className="container-md text-center">
                  <div className="row align-items-center">
                      <div className="col-3">
                          <input type="text" value={input} readOnly />
                          {/* {console.log({result})} */}
                      </div>
                  </div>
                  <div className="row align-items-center">
                      <div className="col-3">
                          <button onClick={handleClear}>AC</button>
                      </div>
                      <div className="col-3">
                          <button onClick={handleDelete}>Delete</button>
                      </div>
                      <div className="col-3">
                          <button
                              onClick={() => {
                                  handleClick("/");
                              }}
                          >
                              /
                          </button>
                      </div>
                  </div>
                  <div className="row align-items-center">
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("7");
                              }}
                          >
                              7
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("8");
                              }}
                          >
                              8
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("9");
                              }}
                          >
                              9
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("*");
                              }}
                          >
                              *
                          </button>
                      </div>
                  </div>
                  <div className="row align-items-center">
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("4");
                              }}
                          >
                              4
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("5");
                              }}
                          >
                              5
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("6");
                              }}
                          >
                              6
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("-");
                              }}
                          >
                              -
                          </button>
                      </div>
                  </div>
                  <div className="row align-items-center">
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("1");
                              }}
                          >
                              1
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("2");
                              }}
                          >
                              2
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("3");
                              }}
                          >
                              3
                          </button>
                      </div>
                      <div className="col-2">
                          <button
                              onClick={() => {
                                  handleClick("+");
                              }}
                          >
                              +
                          </button>
                      </div>
                  </div>
                  <div className="row align-items-center">
                      <div className="col-3">
                          <button
                              onClick={() => {
                                  handleClick("0");
                              }}
                          >
                              0
                          </button>
                      </div>
                      <div className="col-3">
                          <button
                              onClick={() => {
                                  handleClick(".");
                              }}
                          >
                              .
                          </button>
                      </div>
                      <div className="col-3">
                          <button
                              onClick={
                                  handleCalculate
                              }
                          >
                              =
                          </button>
                      </div>
                  </div>
              </div>
          </>
      );
}

export default Scicalculator
