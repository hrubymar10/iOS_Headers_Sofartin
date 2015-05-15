/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding> {
    NSMutableArray *_parameters;
    NSString *_sql;
}

@property (nonatomic, retain) NSMutableArray *parameters;
@property (nonatomic, copy) NSString *sql;

+ (id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSQL:(id)arg1 parameters:(id)arg2;
- (id)parameters;
- (void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2;
- (void)setParameters:(id)arg1;
- (void)setSql:(id)arg1;
- (id)sql;

@end
