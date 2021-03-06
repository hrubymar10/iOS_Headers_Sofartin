/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
    NSMutableSet *_supportedReports;
}

@property (nonatomic, retain) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (void)addSupportedReport:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setSupportedReports:(id)arg1;
- (id)supportedReports;
- (bool)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;

@end
