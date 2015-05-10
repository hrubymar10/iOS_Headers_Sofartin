/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraintParser : NSObject {
    NSMutableArray *_alignmentConstraints;
    NSMutableArray *_constraints;
    <NSLayoutItem> *_containerView;
    unsigned long long _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    NSString *_line;
    const char *_lineChars;
    unsigned long long _lineLength;
    NSDictionary *_metrics;
    unsigned long long _opts;
    <NSLayoutItem> *_parsedConstrainedWidthView;
    <NSLayoutItem> *_parsedLeftView;
    <NSLayoutItem> *_parsedRightView;
    NSMutableArray *_unflushedWidthConstraints;
    bool _useHorizontalArrangement;
    NSDictionary *_views;
}

+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;

- (id)constraints;
- (void)dealloc;
- (id)description;
- (id)descriptionLineWithCurrentCharacterPointer;
- (void)failWithDescription:(id)arg1;
- (void)findContainerView;
- (void)finishConstraint;
- (void)flushWidthConstraints;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (id)layoutItemForKey:(id)arg1;
- (id)metricForKey:(id)arg1;
- (void)parse;
- (void)parseConnection;
- (double)parseConstant;
- (void)parseOp;
- (void)parsePredicate;
- (void)parsePredicateList;
- (void)parsePredicateWithParentheses;
- (id)parseView;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfName;

@end
