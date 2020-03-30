class Solution {
public:
    bool judgeCircle(string moves) {
       int lcount,rcount,upcount,downcount;
        lcount=rcount=upcount=downcount=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                upcount++;
            }
            else if(moves[i]=='D')
                downcount++;
            else if(moves[i]=='L')
                lcount++;
            else
                rcount++;
        }
        return ((lcount==rcount)&&(upcount==downcount));
    }
};
