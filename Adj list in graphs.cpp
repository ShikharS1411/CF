//an matrix would be given jisme konsi node kha connect h wo
//n->number of node would be given
//take aj list as a map :)
vector<int>adj[n];
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (a[i][j]==1){
            //if undirected the do for both otherwise then just for the current
            adj[i].pb(j);
            adj[j].pb(i);
        }
}
}