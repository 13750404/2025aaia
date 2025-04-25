//week10-4.cpp
//LeetCode1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
    int a[100] = {};//硂柑璶total瞷碭Ω(ノㄓ参璸totalΩ计)
        int largest = 0; //魁程竤柑Τ碭计
        for(int i=1;i<=n;i++){
            int now=i;//瞷璶ブ计
            int total=0;//癹伴玡total琌0
            while(now>0){//ブ猭
            total += now%10;//ブnow%10–计,total柑
            now = now/10;//ブ,now跑
            }
            a[total]++;//癹伴,璶参璸total瞷Ω计
            if( a[total] >largest) largest = a[total];
        }
        int ans=0;//程计êㄇ竤,Τ碭竤?
        for(int i=0;i<100;i++){
            if(a[i]==largest)ans++;//狦a[i]琌程ê竤
        }
         return ans;
    }
};
