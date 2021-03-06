/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {
    NSSQLProperty *_collectionProperty;
    NSSQLEntity *_governingEntityForVariable;
    NSExpression *_subqueryExpression;
    NSString *_variableAlias;
    NSExpression *_variableExpression;
}

- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (bool)_isKeypathScopedToSubquery:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (bool)isExistenceScoped;

@end
