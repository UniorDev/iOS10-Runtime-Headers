/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUCameraApplicationViewController : CAMApplicationViewController  {
    CAMCameraRollSpec *_spec;
    DeferredFrameworkLoader *_deferredLoader;
}

@property(retain) CAMCameraRollSpec * spec;
@property(retain) DeferredFrameworkLoader * deferredLoader;


- (void)setDeferredLoader:(id)arg1;
- (id)deferredLoader;
- (void)setSpec:(id)arg1;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(bool)arg2;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3;
- (void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (id)spec;
- (void).cxx_destruct;
- (bool)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2;
- (id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)definesPresentationContext;

@end