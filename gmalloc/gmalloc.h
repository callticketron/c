#ifndef GMALLOC_H
#define GMALLOC_H

typedef struct GmallocNode {
    int references;
    GmallocNode *next;
    GmallocNode *prev;
} GmallocNode;

#endif /* ifndef GMALLOC_H */
