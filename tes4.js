//basic example of using mocha (test code in same file)
"use strict";
const assert = require("assert");
function convertFirnigt(num){
    let fir=(num-32)*5/9;
    return fir;
  
}
describe("temp in dgree cent", function () {
    it("0 temp ", function () {
    assert.strictEqual(convertFirnigt(9), );
    });
    it(" 32  temp", function () {
    assert.strictEqual(convertFirnigt(0), 32);
    });
    });