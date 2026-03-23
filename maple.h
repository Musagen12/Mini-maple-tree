// Slots
#define GENERIC_SLOTS = 31
#define RANGE64_SLOTS = 16
#define ARANGE64_SLOTS = 10

// Pivots
#define GENERIC_PIVOTS = GENERIC_SLOTS - 1
#define RANGE64_PIVOTS = RANGE64_SLOTS - 1
#define ARANGE64_PIVOTS = ARANGE64_SLOTS - 1

// The masks
#define NODE_MASK = 255 // This is meant to clear the encoded bits

// The node types
enum maple_node_type {
	maple_range64,
	maple_arange64,
	maple_leaf64,
	maple_dense
};