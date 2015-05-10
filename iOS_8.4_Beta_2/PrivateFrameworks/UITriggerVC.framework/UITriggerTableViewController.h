/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface UITriggerTableViewController : UITableViewController <CSLUIUITriggerIDSProtocolResponse, IDSServiceDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray *_UIProviders;
    UIAlertView *_alertView;
    IDSService *_idsService;
}

@property(assign,retain) NSMutableArray * UIProviders;
@property(assign,retain) UIAlertView * alertView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) IDSService * idsService;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIProviders;
- (id)alertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)idsRequestUITriggerResponse:(id)arg1;
- (id)idsService;
- (void)idsUIProvidersResponse:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requestPluginList;
- (id)sendProtobufRequest:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(bool)arg4 errorHandler:(id)arg5 withTimeout:(double)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setAlertView:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setUIProviders:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)triggerUIProvider:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
