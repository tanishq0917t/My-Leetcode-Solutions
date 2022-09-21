def helper(node, mapper, level):
        if level in mapper:
            mapper[level] = mapper[level] + [node.val]
        else:  
            mapper[level] = [node.val]

        if node.left:
            mapper = helper(node.left, mapper, level + 1)

        if node.right:
            mapper = helper(node.right, mapper, level + 1)

        return mapper
class Solution:
    
    def deepestLeavesSum(self, root: TreeNode) -> int:
        mapper = helper(root, {}, 1)
        deepest_level = 1

        for level in mapper:
            if level > deepest_level:
                deepest_level = level

        deepest_level_nodes_values = mapper[deepest_level]

        nodes_values_sum = 0

        for node_value in deepest_level_nodes_values:
            nodes_values_sum += node_value

        return nodes_values_sum
