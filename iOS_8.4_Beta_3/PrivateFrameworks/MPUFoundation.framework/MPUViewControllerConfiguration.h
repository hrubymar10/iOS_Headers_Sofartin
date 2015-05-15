/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUViewControllerConfiguration : NSObject {
    NSString *_aggregateStatisticDisplayCountKey;
    Class _cellConfigurationClass;
    id _configurationBlock;
    MPUDataSourceConfiguration *_dataSourceConfiguration;
    Class _navigationControllerClass;
    Class _viewControllerClass;
    bool _wantsModalPresentation;
    bool _wantsNavigationController;
}

@property(assign,copy) NSString * aggregateStatisticDisplayCountKey;
@property(assign,readonly) Class cellConfigurationClass;
@property(assign,copy) id configurationBlock;
@property(assign,retain) MPUDataSourceConfiguration * dataSourceConfiguration;
@property(assign,retain) Class navigationControllerClass;
@property(assign,readonly) Class viewControllerClass;
@property(assign,readwrite) bool wantsModalPresentation;
@property(assign,readwrite) bool wantsNavigationController;

+ (id)configurationWithViewControllerClass:(Class)arg1;
+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;

- (void).cxx_destruct;
- (id)aggregateStatisticDisplayCountKey;
- (Class)cellConfigurationClass;
- (id)configurationBlock;
- (id)dataSourceConfiguration;
- (id)initWithViewControllerClass:(Class)arg1;
- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (Class)navigationControllerClass;
- (void)setAggregateStatisticDisplayCountKey:(id)arg1;
- (void)setConfigurationBlock:(id)arg1;
- (void)setDataSourceConfiguration:(id)arg1;
- (void)setNavigationControllerClass:(Class)arg1;
- (void)setWantsModalPresentation:(bool)arg1;
- (void)setWantsNavigationController:(bool)arg1;
- (Class)viewControllerClass;
- (bool)wantsModalPresentation;
- (bool)wantsNavigationController;

@end