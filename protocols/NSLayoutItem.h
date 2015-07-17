/* Generated by RuntimeBrowser.
 */

@protocol NSLayoutItem <NSObject>

@required

- (unsigned int)nsli_autoresizingMask;
- (struct CGSize { float x1; float x2; })nsli_convertSizeFromEngineSpace:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })nsli_convertSizeToEngineSpace:(struct CGSize { float x1; float x2; })arg1;
- (NSString *)nsli_description;
- (BOOL)nsli_descriptionIncludesPointer;
- (BOOL)nsli_isFlipped;
- (NSISEngine *)nsli_layoutEngine;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(float)arg3 container:(id <NSLayoutItem>)arg4;
- (BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(float)arg3 forConstraint:(NSLayoutConstraint *)arg4;
- (BOOL)nsli_resolvedValue:(float*)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id*)arg4;
- (<NSLayoutItem> *)nsli_superitem;

@optional

- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1;
- (NSISVariable *)nsli_heightVariable;
- (NSArray *)nsli_installedConstraints;
- (float)nsli_marginOffsetForAttribute:(int)arg1;
- (NSISVariable *)nsli_minXVariable;
- (NSISVariable *)nsli_minYVariable;
- (BOOL)nsli_removeConstraint:(NSLayoutConstraint *)arg1;
- (NSISVariable *)nsli_widthVariable;

@end