/*  C style array vector
 *
 *   - has length V
 *   - each position is a empty std::vector<int>
 */

std::vector<int> adj[V];

/* Vector of vectors
 *
 *  - mutable structure, can always be increased in length or depth
 *  - most used
 */

std::vector<vector<int> > adj;

/* Adjacency Matrix
 *
 *  - Occupies too much space
 *  - Has indexes that are not used
 *  - (int)
 *      - has 0 where there is no connection from row to column
 *      - has 1 where there is connection from row to column
 *  - (bool)
 *      - has false where there is no connection from row to column
 *      - has true where there is connection from row to column
 */


int adjMatrix[rows][columns];
bool adjMatrix[rows][columns];
