class Tree:
	def __init__(self, data, children=[]):
		self.data = data
		self.children = children

def max_path(tree):
	d_node = {}
	max_val = max_path_helper(tree, d_node, {}, set())
	return find_path(tree, d_node), max_val

def max_path_helper(tree, d_node, d_val, done):

	if tree == None:
		return 0
	if (tree not in done):
		best_next = None
		best_val = 0
		for child in tree.children:
				val = max_path_helper(child, d_node, d_val, done)
				if val > best_val:
					best_val = val
					best_next = child
		d_node[tree] = best_next
		d_val[tree] = tree.data + best_val
		done.add(tree)
	return d_val[tree]


def find_path(tree, d):
	path = []
	curr = tree
	while curr in d:
		path.append(curr.data)
		curr = d[curr]
	return path

# Quick test
second_eight = Tree(8)
five = Tree(5)
first_eight = Tree(8)
first_eight.children = [five, second_eight]
two = Tree(2)
two.children = [second_eight, Tree(2)]
dag = Tree(3, \
			[Tree(9, \
				[Tree(1, \
					[Tree(4), Tree(5)]), \
				first_eight]), \
			Tree(4, \
				[first_eight, \
				two])])

print(max_path(dag))
