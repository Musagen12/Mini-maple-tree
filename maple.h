// Slot related definitions
#define GENERIC_SLOTS = 31
#define RANGE64_SLOTS = 16
#define ARANGE64_SLOTS = 10

// Pivot related definitions
#define GENERIC_PIVOTS = GENERIC_SLOTS - 1
#define RANGE64_PIVOTS = RANGE64_SLOTS - 1
#define ARANGE64_PIVOTS = ARANGE64_SLOTS - 1

// The masks for bitwise manipulation
#define NODE_MASK = 255 // This is meant to clear the encoded bits

// The node types
enum maple_node_type {
	maple_range64,  // Regular nodes
	maple_arange64,  // For an allocation tree
	maple_leaf64,  // Store data not pointers to node
	maple_dense  // No pivots
};

// The metadata definition
struct metadata {
	unsigned char gap; // The largest empty space
	unsigned char end; // The end of the data
};