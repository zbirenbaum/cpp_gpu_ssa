// Useful container manipulation / traversal macros 
#define forall(i,a,b) for(int i=a;i<b;i++) 
#define foreach(v, c) for(typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)        a.begin(), a.end()
#define in(a,b)       ( (b).find(a) != (b).end())
#define pb            push_back
#define fill(a,v)      memset(a, v, sizeof a)
#define sz(a)         ((int)(a.size()))
#define mp            make_pair
