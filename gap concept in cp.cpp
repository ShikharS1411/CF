/*
.if "want/computed" value +gaps > n then we cant fill those gaps with our want value
.to check if we can fill a gap with lesser or equla values of an element(elem_val) and for a particular sum :
cond -> gap*elem_val>=sum
the above cond came from gap>=floor(sum/elem_value)
thus if this cond hold we can always fill all the gaps with lesser or equal values than elem_val(0,1,etc can compensate)
*/
