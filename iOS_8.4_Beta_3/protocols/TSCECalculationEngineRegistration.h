/* Generated by RuntimeBrowser.
 */

@protocol TSCECalculationEngineRegistration <TSKModel>

@required

- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (bool)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
- (void)unregisterFromCalculationEngine:(TSCECalculationEngine *)arg1;

@end
