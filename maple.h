// Slots
GENERIC_SLOTS = 31
RANGE64_SLOTS = 16
ARANGE64_SLOTS = 10

// Pivots
GENERIC_PIVOTS = GENERIC_SLOTS - 1
RANGE64_PIVOTS = RANGE64_SLOTS - 1
ARANGE64_PIVOTS = ARANGE64_SLOTS - 1

// The masks
NODE_MASK = 255 // This is meant to clear the encoded bits

// The node types
enum maple_node_type {
	maple_range64,
	maple_arange64,
	maple_leaf64,
	maple_dense
};