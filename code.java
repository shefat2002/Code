public class code{
    public static void main(String[] args){
        int[] a = {10,20,30,40,50,-1,99};
        int mn = -999999999;
        for(int i = 0; i < a.length; i++) mn = mini(mn,a[i]);
    }
}