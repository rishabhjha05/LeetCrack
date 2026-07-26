/**
 * @param {string[]} words
 * @return {string[]}
 */
var stringMatching = function(words) {
    let n=words.length;
    var ans=[];
    for(let i=0;i<n;i++){
        for(let j=0;j<n;j++){
            if(words[j].includes(words[i]) && j!=i){
                ans.push(words[i]);
                break;
            }
        }
    }
    return ans;
};