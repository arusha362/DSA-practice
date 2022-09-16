/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
    vector<string> a = {"zero", "one", "two", "three", "four", "five", "six",         "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",      "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty      one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty         six", "twenty seven", "twenty eight", "twenty nine" };
    string time;
    if(m<=30){
        if(m==0){
            time=a[h]+" o' clock";}
        else if(m==15){
            time="quarter past "+a[h];}
        else if(m==30){
            time="half past "+a[h];}
        else if(m==1){
            time=a[m]+" minute past "+a[h];}
        else{
        time=a[m]+" minutes past "+a[h];}
    }
    else{
        if(m==45){
            time="quarter to "+a[h+1];}
        else if(m==59){
            time=a[60-m]+" minute to "+a[h+1];}
        else{
            time=a[60-m]+" minutes to "+a[h+1];}
    }
    return time;
}
