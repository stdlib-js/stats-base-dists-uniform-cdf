"use strict";var f=function(e,r){return function(){return r||e((r={exports:{}}).exports,r),r.exports}};var s=f(function(m,c){
var i=require('@stdlib/math-base-assert-is-nan/dist');function v(e,r,t){return i(e)||i(r)||i(t)||r>=t?NaN:e<r?0:e>=t?1:(e-r)/(t-r)}c.exports=v
});var a=f(function(F,o){
var N=require('@stdlib/utils-constant-function/dist'),u=require('@stdlib/math-base-assert-is-nan/dist');function y(e,r){if(u(e)||u(r)||e>=r)return N(NaN);return t;function t(n){return u(n)?NaN:n<e?0:n>=r?1:(n-e)/(r-e)}}o.exports=y
});var d=require('@stdlib/utils-define-nonenumerable-read-only-property/dist'),q=s(),p=a();d(q,"factory",p);module.exports=q;
/** @license Apache-2.0 */
//# sourceMappingURL=index.js.map
