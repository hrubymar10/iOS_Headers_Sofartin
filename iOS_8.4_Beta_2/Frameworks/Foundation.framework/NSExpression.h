/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExpression : NSObject <NSCopying, NSSecureCoding> {
    struct _expressionFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedExpressionFlags : 31; 
    } _expressionFlags;
    unsigned long long _expressionType;
    unsigned int reserved;
}

@property(assign,copy) NSArray * arguments;
@property(assign,retain) id collection;
@property(assign,retain) id constantValue;
@property(assign,copy) id expressionBlock;
@property(assign,readonly) unsigned long long expressionType;
@property(assign,copy) NSString * function;
@property(assign,copy) NSString * keyPath;
@property(assign,copy) NSExpression * leftExpression;
@property(assign,copy) NSExpression * operand;
@property(assign,copy) NSPredicate * predicate;
@property(assign,copy) NSExpression * rightExpression;
@property(assign,copy) NSString * variable;

+ (id)_newKeyPathExpressionForString:(id)arg1;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForAnyKey;
+ (id)expressionForBlock:(id)arg1 arguments:(id)arg2;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionWithCKDPRecordFieldValue:(id)arg1 translator:(id)arg2;
+ (id)expressionWithFormat:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)expressionWithFormat:(id)arg1 arguments:(char *)arg2;
+ (bool)supportsSecureCoding;

- (id)CKExpressionValue;
- (bool)_allowsEvaluation;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (bool)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)arguments;
- (id)collection;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionBlock;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)falseExpression;
- (id)function;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionType:(unsigned long long)arg1;
- (id)keyPath;
- (id)leftExpression;
- (id)minimalFormInContext:(id)arg1;
- (id)operand;
- (id)predicate;
- (id)predicateFormat;
- (id)rightExpression;
- (SEL)selector;
- (id)subexpression;
- (id)trueExpression;
- (id)variable;

@end