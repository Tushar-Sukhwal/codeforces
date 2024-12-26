
import java.util.*;


import java.io.*;
public class icpc
{
 // static int M=(int)(1e9+7);
 static int M=998244353;
 static FastReader in = new FastReader();
 static FastWriter out = new FastWriter();
 
 static double PI=3.1415926535897932384626433832795;
 @SuppressWarnings("unchecked")
 
 // हर हर महादेव
 // हरे कृष्णा 
 
 //10^6 space of int is allowed not of long
 // Yesterday was history
 // Tomorrow will be a mystery
 // but today is a gift
 // That is why it is called the present
 
 /* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */
 
 //Credit Striver
 // Remember you were also a novice when you started, 
 // hence never be rude to anyone who wants to learn something
 // Never open a ranklist untill and unless you are done with solving problems, wastes 3/4 minuts 
 // Donot treat CP as a placement thing, love it and ejoy it, you will suceed for sure. 

 public static void main(String[] args)throws Exception
 {
 // in = new FastReader("input11.txt");
 // out = new FastWriter("mootube.out");
 int testcases=1;
 
 testcases=in.nextInt(); 

 // testcases=sc.nextInt();//For interactive problems;
 outer:
 for(int tt=1;tt<=testcases;tt++)
 {
 solve();
 // YES(solve());
 // Yes(solve());
 // out.println("Case #"+tt+": "+solve());
 }
 out.close();
 
 } 

 static ArrayList<ArrayList<Integer>> graph;
 static ArrayList<ArrayList<Integer>> graph1;
 static ArrayList<ArrayList<Edge>> g1;
 static ArrayList<ArrayList<Edge>> g2;
 
 static boolean visited[]; 
 static int color[];
 static ArrayList<ArrayList<Pair>> graphh=new ArrayList<>();
 static Scanner sc=new Scanner(System.in);

 @SuppressWarnings("unchecked") 
 public static void solve()throws Exception
 {
 int n=in.nextInt();int d=in.nextInt();int l=in.nextInt();
 boolean ff=true;
 int n1=n;
 int d1=d;
 int l1=l;
 if(d1==2) 
 {
 if(n1-l1==1) 
 {
 for(int i=2;i<=n;i++)out.println(1+" "+i);
 endl();
 }
 else 
 {
 out.println(-1);
 } 
 return;
 }
 graph=new ArrayList<>();
 for(int i=0;i<n+1;i++)
 {
 graph.add(new ArrayList<>());
 }
 try 
 {
 if((d%2==1))
 {

 int x=1;
 ArrayList<Pair> al=new ArrayList<>();
 for(int i=0;i<d/2;i++)
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 }
 x++;
 graph.get(1).add(x);
 graph.get(x).add(1);
 al.add(new Pair(x,1,0));
 for(int i=0;i<d/2;i++)
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 }
 l-=2;
 int xx=x;
 x++;
 while(l>0)
 {
 graph.get(1).add(x);
 graph.get(x).add(1);
 al.add(new Pair(1,x,0));
 // al.add(new Pair(x,1,0));
 x++;
 l--;
 }
 int dd=(d)/2;
 xx++;
 while(x<=n)
 {
 int ddd=dd;
 graph.get(xx).add(x);
 graph.get(x).add(xx);
 al.add(new Pair(xx,x,0));
 // al.add(new Pair(x,xx,0));
 xx++;
 x++;
 ddd--;
 while(ddd>0 && x+1<=n) 
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 ddd--;
 }
 }
 for(Pair i:al)
 {
 // out.println(i.a+" "+i.b);
 }
 int nn=0;
 int ll=0;
 for(int i=1;i<=n;i++)
 {
 if(graph.get(i).size()>0)
 {
 nn++;
 }
 if(graph.get(i).size()==1)ll++;
 }
 // out.println(nn+" "+ll);

 int[] firstBFS = bfs(1, n);

 // Step 2: Start BFS from the farthest node found in Step 1
 int[] secondBFS = bfs(firstBFS[0], n);
 
 // Diameter is the maximum distance found in Step 2
 int diameter = secondBFS[1];
 if(diameter==d1 && l1==ll && nn==n1)
 {
 for(Pair i:al)
 {
 out.println(i.a+" "+i.b);
 }
 }
 else out.println(-1);
 

 // for(Pair i:al)
 // {
 // out.println(i.a+" "+i.b);
 // }
 }
 else 
 {
 int x=1;
 ArrayList<Pair> al=new ArrayList<>();
 for(int i=0;i<d/2;i++)
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 }
 x++;
 graph.get(1).add(x);
 graph.get(x).add(1);
 al.add(new Pair(x,1,0));
 for(int i=0;i<d/2-1;i++)
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 }
 l-=2;
 int xx=x;
 x++;
 while(l>0)
 {
 graph.get(1).add(x);
 graph.get(x).add(1);
 al.add(new Pair(1,x,0));
 // al.add(new Pair(x,1,0));
 x++;
 l--;
 }
 int dd=(d)/2;
 xx++;
 while(x<=n)
 {
 int ddd=dd;
 graph.get(xx).add(x);
 graph.get(x).add(xx);
 al.add(new Pair(xx,x,0));
 // al.add(new Pair(x,xx,0));
 xx++;
 x++;
 ddd--;
 while(ddd>0 && x+1<=n) 
 {
 graph.get(x).add(x+1);
 graph.get(x+1).add(x);
 al.add(new Pair(x,x+1,0));
 // al.add(new Pair(x+1,x,0));
 x++;
 ddd--;
 }
 }
 for(Pair i:al)
 {
 // out.println(i.a+" "+i.b);
 }
 
 int nn=0;
 int ll=0;
 for(int i=1;i<=n;i++)
 {
 if(graph.get(i).size()>0)
 {
 nn++;
 }
 if(graph.get(i).size()==1)ll++;
 }

 int[] firstBFS = bfs(1, n);

 // Step 2: Start BFS from the farthest node found in Step 1
 int[] secondBFS = bfs(firstBFS[0], n);

 // Diameter is the maximum distance found in Step 2
 int diameter = secondBFS[1];
 // out.println(diameter);
 // out.println(nn+" "+ll);

 if(diameter==d1 && l1==ll && nn==n1)
 {
 for(Pair i:al)
 {
 out.println(i.a+" "+i.b);
 }
 }
 else out.println(-1);
 

 // for(Pair i:al)
 // {
 // out.println(i.a+" "+i.b);
 // }
 }
 }
 catch(Exception ee) 
 {
 out.println(-1);
 }

 }

 static int[] bfs(int start, int n) {
 Queue<Integer> queue = new LinkedList<>();
 boolean[] visited = new boolean[n + 1]; // 1-based indexing
 int[] distance = new int[n + 1];
 
 queue.add(start);
 visited[start] = true;

 int farthestNode = start;
 int maxDistance = 0;

 while (!queue.isEmpty()) {
 int node = queue.poll();
 for (int neighbor : graph.get(node)) {
 if (!visited[neighbor]) {
 visited[neighbor] = true;
 distance[neighbor] = distance[node] + 1;
 queue.add(neighbor);

 if (distance[neighbor] > maxDistance) {
 maxDistance = distance[neighbor];
 farthestNode = neighbor;
 }
 }
 }
 }

 return new int[]{farthestNode, maxDistance};
 }


 public static long abs(long a)
 {
 return Math.abs(a);
 }
 public static int abs(int a)
 {
 return Math.abs(a);
 }
 public static double abs(double a)
 {
 return Math.abs(a);
 }
 public static int first(Integer ar[],int k)
 {
 int n=ar.length;
 if(k>ar[n-1])return n;
 int ans=0;
 int min=0;
 int max=n-1;
 while(max>=min)
 {
 int mid=min+(max-min)/2;
 if(ar[mid]>=k)
 {
 ans=mid;
 max=mid-1;
 }
 else min=mid+1;
 }
 return ans;
 }

 public static int last(Integer ar[],int k)
 {
 if(k<ar[0])
 {
 return 0;
 }
 int n=ar.length;
 if(k>=ar[n-1])return n;
 int ans=n-1;
 int min=0;
 int max=n-1;
 while(max>=min)
 {
 int mid=min+(max-min)/2;
 
 if(ar[mid]>k)
 {
 ans=mid;
 max=mid-1;
 }
 else min=mid+1;
 }
 
 return ans;
 }

 public static long gcd(long a,long b)//Note a>b
 { 
 if(b==0)return a;
 return gcd(b,a%b);
 }

 public static long lcm(long a,long b)
 {
 return a*b/gcd(a,b);
 }
 
 public static long pow(long a, long n, long M) 
 {
 if (n == 0) return 1;
 long ans = 1;
 a %= M;
 while (n != 0) {
 if ((n & 1) == 1) {
 ans = (ans % M * a % M) % M;
 }
 a = (a % M * a % M) % M;
 n /= 2;
 }
 return ans;
 }

 public static int max(int ... a) 
 {
 int max = a[0];
 for (int i : a) 
 {
 if (i > max) 
 {
 max = i;
 }
 }
 return max;
 }
 
 public static long max(long ... a) 
 {
 long max = a[0];
 for (long i : a) {
 if (i > max) {
 max = i;
 }
 }
 return max;
 }
 
 public static double max(double ... a) 
 {
 double max = a[0];
 for (double i : a) {
 if (i > max) {
 max = i;
 }
 }
 return max;
 }
 
 // Minimum functions
 public static int min(int ... a) 
 {
 int min = a[0];
 for (int i : a) {
 if (i < min) {
 min = i;
 }
 }
 return min;
 }
 
 public static long min(long ... a) 
 {
 long min = a[0];
 for (long i : a) {
 if (i < min) {
 min = i;
 }
 }
 return min;
 }
 
 public static double min(double ... a)
 {
 double min = a[0];
 for (double i : a) {
 if (i < min) {
 min = i;
 }
 }
 return min;
 }

 public static boolean isSorted(long ar[])
 {
 int n=ar.length;
 for(int i=0;i<n-1;i++)
 {
 if(ar[i]>ar[i+1])return false;
 }
 return true;
 }
 
 
 public static int maxIntArray(ArrayList<Integer> ar)
 {
 int max=ar.get(0);
 for(int i=0;i<ar.size();i++)max=Math.max(max,ar.get(i));
 return max;
 }

 private static int countDigits(long l) 
 {
 if (l >= 1000000000000000000L) return 19;
 if (l >= 100000000000000000L) return 18;
 if (l >= 10000000000000000L) return 17;
 if (l >= 1000000000000000L) return 16;
 if (l >= 100000000000000L) return 15;
 if (l >= 10000000000000L) return 14;
 if (l >= 1000000000000L) return 13;
 if (l >= 100000000000L) return 12;
 if (l >= 10000000000L) return 11;
 if (l >= 1000000000L) return 10;
 if (l >= 100000000L) return 9;
 if (l >= 10000000L) return 8;
 if (l >= 1000000L) return 7;
 if (l >= 100000L) return 6;
 if (l >= 10000L) return 5;
 if (l >= 1000L) return 4;
 if (l >= 100L) return 3;
 if (l >= 10L) return 2;
 return 1;
 }
 public static int minIntArray(ArrayList<Integer> ar)
 {
 
 int n=ar.size();
 int max=ar.get(0);
 for(int i=0;i<n;i++)max=Math.min(max,ar.get(i));
 return max;
 }
 public static int maxIntArray(int ar[])
 {
 int max=ar[0];
 for(int i=0;i<ar.length;i++)max=Math.max(max,ar[i]);
 return max;
 }
 
 public static int minIntArray(int ar[])
 {
 
 int max=ar[0];
 for(int i=0;i<ar.length;i++)max=Math.min(max,ar[i]);
 return max;
 }
 
 public static void endl()throws Exception
 {
 out.println();
 }
 public static boolean isSorted(int ar[],int n)
 {
 if(n==1)return true;
 int diff=ar[1]-ar[0];
 for(int i=1;i<n;i++)
 {
 diff=Math.min(diff,ar[i]-ar[i-1]);
 }
 if(diff<0)return false;
 return true;
 }
 public static boolean isSorted(Integer ar[],int n)
 
 {
 if(n==1)return true;
 int diff=ar[1]-ar[0];
 for(int i=1;i<n;i++)
 {
 diff=Math.min(diff,ar[i]-ar[i-1]);
 }
 if(diff<0)return false;
 return true;
 }

 // public static void addMap(TreeMap<Integer,Integer> map,Integer element)
 // {
 // if(map.containsKey(element))
 // map.put(element,map.get(element)+1);
 // else map.put(element,1);
 // }
 

 public static <K> void removeMap(Map<K, Integer> map, K element) 
 {
 if (!map.containsKey(element)) return;
 int currentCount = map.get(element);
 if (currentCount == 1) {
 map.remove(element);
 } else {
 map.put(element, currentCount - 1);
 }
 }

 public static <K> void addMap(Map<K, Integer> map, K element) 
 {
 if (map.containsKey(element)) {
 map.put(element, map.get(element) + 1);
 } else {
 map.put(element, 1);
 }
 }
 
 // public static void addMap(TreeMap<Integer,Integer> map,Integer element)
 // {
 // if(map.containsKey(element))
 // map.put(element,map.get(element)+1);
 // else map.put(element,1);
 // }
 public static void removeMap(TreeMap<Integer,Integer> map,int element)
 {
 if(map.get(element)==1)map.remove(element);
 else map.put(element,map.get(element)-1);
 }
 public static void removeMap(TreeMap<Long,Integer> map,long element)
 {
 if(!map.containsKey(element))return;
 if(map.get(element)==1)map.remove(element);
 else map.put(element,map.get(element)-1);
 }
 public static void removeMap(HashMap<Long,Integer> map,long element)
 {
 if(!map.containsKey(element))return;
 if(map.get(element)==1)map.remove(element);
 else map.put(element,map.get(element)-1);
 }
 public static void removeMap(HashMap<Integer,Integer> map,int element)
 {
 if(map.get(element)==1)map.remove(element);
 else map.put(element,map.get(element)-1);
 }
 
 public static void removeMap(HashMap<String,Integer> map,String element)
 {
 if(map.get(element)==1)map.remove(element);
 else map.put(element,map.get(element)-1);
 }
 // public static void addMap(TreeMap<Object,Integer> map,Integer element)
 // {
 // if(map.containsKey(element))
 // map.put(element,map.get(element)+1);
 // else map.put(element,1);
 // }
 
 public static void addMap(TreeMap<Integer,Integer> map,Integer element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 
 public static void addMap(TreeMap<String,Integer> map,String element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 
 public static void addMap(TreeMap<Long,Integer> map,long element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 public static void addMap(HashMap<Integer,Integer> map,int element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 public static void addMap(HashMap<Long,Long> map,long element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1L);
 }
 public static void addMap(HashMap<Object,Integer> map,Integer element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 public static void addMap(HashMap<Long,Integer> map,Long element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 public static void addMap(HashMap<String,Integer> map,String element)
 {
 if(map.containsKey(element))
 map.put(element,map.get(element)+1);
 else map.put(element,1);
 }
 
 public static int[] nextIntArray(int n)throws Exception
 {
 int ar[]=new int[n];
 for(int i=0;i<n;i++)ar[i]=in.nextInt();
 return ar;
 }
 public static long[] nextlongArray(int n)throws Exception//For long
 {
 long ar[]=new long[n];
 for(int i=0;i<n;i++)ar[i]=in.nextLong();
 return ar;
 }
 public static Integer[] nextIntegerArray(int n)throws Exception
 {
 Integer ar[]=new Integer[n];
 for(int i=0;i<n;i++)ar[i]=in.nextInt();
 return ar;
 }
 public static Long[] nextLongArray(int n)//For Long array
 {
 Long ar[]=new Long[n];
 for(int i=0;i<n;i++)ar[i]=in.nextLong();
 return ar;
 }
 public static String[] nextStringArray(int n)
 {
 String ar[]=new String[n];
 for(int i=0;i<n;i++)ar[i]=in.next();
 return ar;
 }
 public static void Yes(boolean flag)throws Exception
 {
 if(flag)out.println("Yes");
 else out.println("No");
 }
 public static void YES(boolean flag)throws Exception
 {
 if(flag)out.println("YES");
 else out.println("NO");
 }
 public static void YES()throws Exception
 {
 out.println("YES");
 }
 public static void NO()throws Exception
 {
 out.println("NO");
 }
 public static void Yes()throws Exception
 {
 out.println("Yes");
 }
 public static void No()throws Exception
 {
 out.println("No");
 }
 
 public static void printArrayListPair(ArrayList<Pair> al)throws Exception
 {
 for(int i=0;i<al.size();i++)
 {
 out.println(al.get(i).a+" "+al.get(i).b);
 }
 }
 
 public static void printArray(boolean ar[])throws Exception{
 for(boolean x:ar)out.print(x+" ");
 out.println();
 }
 public static void printArray(char ar[])throws Exception{
 for(char x:ar)out.print(x+" ");
 out.println();
 }
 
 public static void printArray(int ar[])throws Exception
 {
 for(int x:ar)out.print(x+" ");
 out.println();
 } 
 public static void printArray(Object ar[])throws Exception
 {
 for(Object x:ar)out.print(x+" ");
 out.println();
 } 
 public static void printArray(long ar[])throws Exception
 {
 for(long x:ar)out.print(x+" ");
 out.println();
 } 
 static class FastReader
 {
 BufferedReader br;
 StringTokenizer st;
 public FastReader(String filename) throws FileNotFoundException
 {
 br = new BufferedReader(new FileReader(filename));
 }
 public FastReader()
 {
 br=new BufferedReader(new InputStreamReader(System.in));
 }
 String next()
 {
 while(st==null || !st.hasMoreTokens())
 {
 try 
 {
 st=new StringTokenizer(br.readLine());
 } 
 catch (IOException e) 
 {
 e.printStackTrace();
 }
 }
 return st.nextToken();
 }
 int nextInt()
 {
 return Integer.parseInt(next());
 }
 long nextLong()
 {
 return Long.parseLong(next());
 }
 double nextDouble()
 {
 return Double.parseDouble(next());
 }
 int[] nextIntArray(int n)
 {
 int ar[]=new int[n];
 for(int i=0;i<n;i++)ar[i]=Integer.parseInt(next());
 return ar;
 }
 long[] nextlongArray(int n)
 {
 long ar[]=new long[n];
 for(int i=0;i<n;i++)ar[i]=Long.parseLong(next());
 return ar;
 }
 String nextLine()
 {
 String str="";
 try 
 {
 str=br.readLine().trim();
 } catch (Exception e) 
 {
 e.printStackTrace();
 }
 return str;
 }
 }
 static class FastWriter 
 {
 private final BufferedWriter bw;
 public FastWriter(String filename) throws IOException 
 {
 this.bw = new BufferedWriter(new FileWriter(filename));
 }
 public FastWriter() 
 {
 this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
 }
 
 public void print(Object object) throws IOException 
 {
 bw.append("" + object);
 }
 public void println(Object object) throws IOException 
 {
 print(object);
 bw.append("\n");
 }
 public void println() throws IOException
 {
 bw.append("\n");
 }
 public void close() throws IOException 
 {
 bw.close();
 }
 }
}

class Edge 
{
 int a,b;long weight;
 Edge(int a,int b,long weight)
 {
 this.a=a;
 this.b=b;
 this.weight=weight;
 }
 Edge(int a,long weight)
 {
 this.a=a;
 this.weight=weight;
 }
}

class compareEdge implements Comparator<Edge>
{
 public int compare(Edge p1,Edge p2)
 {
 return Long.compare(p1.weight, p2.weight);
 }
}

class Pair
{
 int a,b,c;
// long a;
// long b;
 int d;
 boolean flag;
 // Pair(int a,int b,boolean flag)
 // {
 // this.a=a;
 // this.b=b;
 // this.flag=flag;
 // }
 // Pair(long a,long b)
 // {
 // this.a=a;
 // this.b=b;
 // }
 // Pair(long a,long b,long c)
 // {
 // this.a=a;
 // this.b=b;
 // this.c=c;
 // }
 // Pair(int a,int b)
 // {
 // this.a=a;
 // this.b=b;
 // }
 Pair(int a,int b,int c)
 {
 this.a=a;
 this.b=b;
 this.c=c;
 }
 // Pair (int a,int b,int c)
 // {
 // this.a=a;
 // this.b=b;
 // this.c=c;
 // }

 // Pair (int a,int b,int c,int d)
 // {
 // this.a=a;
 // this.b=b;
 // this.c=c;
 // this.d=d;
 // }
 @Override
 public String toString() {
 // return a + " " + b + " " + c;
 return a+" "+b;
 }


 public boolean equals(Object obj) {
 if (this == obj) return true;
 if (obj == null || getClass() != obj.getClass()) return false;
 Pair pair = (Pair) obj;
 // return a == pair.a && b == pair.b && c == pair.c && d == pair.d && flag == pair.flag;

 return a==pair.a && b==pair.b;
 }

 // @Override
 // public int hashCode() {
 // int result = a;
 // result = 31 * result + b;
 // result = 31 * result + c;
 // result = 31 * result + d;
 // result = 31 * result + (flag ? 1 : 0);
 // return result;
 // }
}
 
class compare1 implements Comparator<Pair>
{
 public int compare(Pair p1,Pair p2)
 {
 // if(p1.a==p2.a && p2.b==p1.b)return 0;
 // return p2.a-p1.a;//decreasing
 // return p1.c-p2.c;
 // if(p1.a!=p2.a)
 // return p1.a-p2.a;//increasing
 // if(p1.a==p2.b)return p1.b-p2.b;
 
 return p1.a-p2.a;
 // return p1.b-p2.b; 
 // return Long.compare(p1.a,p2.a);

 // if(p1.a!=p2.a)
 // {
 // return p1.a-p2.a;
 // }
 // else 
 // return p1.b-p2.b;

 // return Long.compare((p2.a+1)/2*p2.b ,(p1.a+1)/2*p1.b);

 // return p2.a-p1.b;
 // return p1.a-p2.a;
 // return p2.c-p1.c;
 // else 
 // return p1.b-p2.b;
 // if(p1.a==p2.a)
 // {
 // return p2.b-p1.b;
 // }
 // else return +p1.a-p2.a;
 // if(p1.a!=p2.a)
 // return p1.a-p2.a;
 // else 
 // return p2.b-p1.b;

 // if(p1.a!=p2.a) 
 // {
 // return p2.a-p1.a;
 // }
 // else 
 // {
 // return p1.b-p2.b;
 // }
 }

 public boolean equals(Pair p1,Pair p2)
 {
 return p1.a==p2.a && p2.b==p1.b;
 }
}


class MO 

{
 int a,b;
 int c;
 static int size;

 MO(int a,int b,int c)
 {
 this.a=a;
 this.b=b;
 this.c=c;
 }
}
class compareMO implements Comparator<MO>
{
 public int compare(MO a,MO b) 
 {
 int size=MO.size;
 if(a.a/size!=b.a/size) 
 {
 return a.a/size-b.a/size;
 }
 return a.b-b.b;
 }
}

class SegmentTree {
 int[] tree; // Segment tree array
 int[] arr; // Original array
 int n; // Size of the original array

 // Constructor to build the segment tree
 public SegmentTree(int[] input) {
 n = input.length;
 arr = input;
 // Allocate memory for segment tree
 // The maximum size of segment tree array is 2*n - 1 for n leaf nodes
 tree = new int[4 * n];
 build(0, 0, n - 1);
 }

 // Build the segment tree
 private void build(int node, int start, int end) {
 if (start == end) {
 // Leaf node: store the value of the array element
 tree[node] = arr[start];
 } else {
 int mid = (start + end) / 2;
 // Recursively build the left and right subtrees
 build(2 * node + 1, start, mid);
 build(2 * node + 2, mid + 1, end);
 // Internal node: store the minimum of the two children
 tree[node] = Math.min(tree[2 * node + 1], tree[2 * node + 2]);
 }
 }

 // Query for the minimum in range [L, R]
 public int query(int L, int R) {
 return query(0, 0, n - 1, L, R);
 }

 private int query(int node, int start, int end, int L, int R) {
 if (R < start || L > end) {
 // Range [L, R] is completely outside the range [start, end]
 return Integer.MAX_VALUE;
 }
 if (L <= start && end <= R) {
 // Range [L, R] completely covers the range [start, end]
 return tree[node];
 }
 // Partial overlap
 int mid = (start + end) / 2;
 int leftMin = query(2 * node + 1, start, mid, L, R);
 int rightMin = query(2 * node + 2, mid + 1, end, L, R);
 return Math.min(leftMin, rightMin);
 }

 // Update an element in the array
 public void update(int index, int value) {
 update(0, 0, n - 1, index, value);
 }

 private void update(int node, int start, int end, int index, int value) {
 if (start == end) {
 // Leaf node: update the value of the array element
 arr[index] = value;
 tree[node] = value;
 } else {
 int mid = (start + end) / 2;
 if (index <= mid) {
 // Update the left child
 update(2 * node + 1, start, mid, index, value);
 } else {
 // Update the right child
 update(2 * node + 2, mid + 1, end, index, value);
 }
 // Update the current node after updating the children
 tree[node] = Math.min(tree[2 * node + 1], tree[2 * node + 2]);
 }
 }
}


