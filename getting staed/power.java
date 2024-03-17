public class power{
    public static void main(String[] args) {
        int base=10;
        int pow=3;
        int ans=1;
        while(pow>0){
            if((pow&1)==1)
            ans*=base;
            base*=base;
           pow= pow>>1;
        }
        System.out.println(ans);
    }
}