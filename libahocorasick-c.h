
#ifndef AHO_COMPILED_H
#define AHO_COMPILED_H
struct aho_patterns {
    unsigned short int	len:13,from_start:1,at_end:1,last:1,
			code,
			pattern; // index in patterns array
};

struct aho_node {
    unsigned short f_node; // != 0, index of aho_node array
    unsigned char  degree, // unused if outgoing == 0 
		   alpha;  // unused if outgoing == 0
                           // if outgoing && degree == 0 -> one char alpha
			   // if outgoing && degree != 0 && !range -> outgoing string
			   // if outgoing && degree != 0 && range -> range [alpha : alpha+degree]
    unsigned short outgoing; // offset in outgoing array
    unsigned short patterns:14,final:1,range:1; // index in aho_patterns array
};

struct aho_compiled {
    struct aho_node *a_node;
    struct aho_patterns *pattern_list;
    unsigned short  *next;
    char            *outgoings;
    char            **patterns;
};


#endif
