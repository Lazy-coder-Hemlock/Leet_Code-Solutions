class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h=(hour%12*30)+((double)minutes/60*30);
        double m=6*minutes;
        double angle=abs(m-h);
        if(angle>180)
            return 360-angle;
        return angle;
    }
};
