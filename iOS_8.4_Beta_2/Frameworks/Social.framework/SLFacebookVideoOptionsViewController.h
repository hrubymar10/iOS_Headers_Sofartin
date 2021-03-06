/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookVideoOptionsViewController : UITableViewController {
    <SLFacebookVideoOptionsDelegate> *_delegate;
    NSArray *_qualityOptions;
    SLVideoQualityOption *_selectedOption;
    NSURL *_videoAssetURL;
}

@property(assign,readwrite) <SLFacebookVideoOptionsDelegate> * delegate;

- (void).cxx_destruct;
- (void)_generateQualityOptionsWithAssetURL:(id)arg1;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)initWithVideoAssetURL:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedQualityOption:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
