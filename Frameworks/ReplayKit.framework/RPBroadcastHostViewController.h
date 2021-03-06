/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastHostViewController : _UIRemoteViewController {
    RPBroadcastViewController * _broadcastViewController;
    RPBroadcastExtensionHostContext * _hostContext;
    NSXPCListenerEndpoint * _listenerEndpoint;
}

@property (nonatomic) RPBroadcastViewController *broadcastViewController;
@property (nonatomic, retain) RPBroadcastExtensionHostContext *hostContext;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (id)broadcastViewController;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (id)hostContext;
- (id)listenerEndpoint;
- (void)setBroadcastViewController:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)updateBroadcastHandlerListenerEndpoint;

@end
