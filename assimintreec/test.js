//basic example of using mocha (test code in same file)
"use strict";
const assert = require("assert");
/* import from functions.js module */
const functionsModule = require("./q1.js");
const computeSalesCommission = functionsModule.computeSalesCommission;  
const ssReverse = functionsModule.ssReverse;
describe("compute returns vlue if argument is computeSalesCommission", function () {
    it("true 200 ", function () {
    assert.strictEqual(computeSalesCommission(true,200), 0);
    });
    it(" 300 compute", function () {
    assert.strictEqual(computeSalesCommission(true,300), 3);
    });
    });
    