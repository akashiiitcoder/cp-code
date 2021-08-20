// n = biggest node number
vector<ll> parent(n + 1), size(n + 1);
ll find(vector<ll> &parent, ll a) {
    return parent[a] = (parent[a] == a ? a : find(parent, parent[a])) ;
}

void Union(vector<ll> &parent, vector<ll> &size, ll a, ll b) {
    ll pa = find(parent, a) ;
    ll pb = find(parent, b) ;

    if (pa != pb) {
        if (size[pa] < size[pb])
            swap(pa, pb) ;
        parent[pb] = pa ;
        size[pa] += size[pb] ;
    }

    return ;
}
