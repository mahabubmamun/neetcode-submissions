import numpy as np
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = len(matrix)
        col = len(matrix[0])
        left = 0
        right = row*col-1

        while left <= right:
            mid = left + (right - left)//2

            r = mid//col
            c = mid%col

            if matrix[r][c] == target:
                return True
            elif matrix[r][c] < target:
                left = mid+1
            else:
                right = mid-1


        # start_row = 0
        # start_col = 0
        # end_row = len(matrix) - 1
        # end_col = len(matrix[0]) - 1

        # while start_row <= end_row and start_col <= end_col:
        #     mid_row = start_row + (end_row - start_row)//2
        #     mid_col = start_col + (end_col - start_col)//2

        #     if matrix[mid_row][mid_col] == target:
        #         return True
        #     elif matrix[mid_row][mid_col] < target:
        #         start_row = mid_row + 1
        #         start_col = mid_col + 1
        #     else:
        #         end_row = mid_row - 1
        #         end_col = mid_col - 1   

        return False         


        