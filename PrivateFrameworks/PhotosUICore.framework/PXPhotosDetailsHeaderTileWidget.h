/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsHeaderTileWidget : NSObject <PXChangeObserver, PXDiagnosticsEnvironment, PXMovieProviderDelegate, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXReusableObjectPoolDelegate, PXSlideshowSessionDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUISlideshowViewTileDelegate, PXUIWidget, PXZoomAnimationObserverCoordinatorDelegate, UIGestureRecognizerDelegate> {
    PHAssetCollection * __assetCollection;
    bool  __basicContentLoaded;
    bool  __canLoadContentData;
    PHAssetCollection * __curatedAssetCollection;
    PXPhotosDetailsHeaderSpec * __headerSpec;
    bool  __hostingViewDidAppear;
    PHFetchResult * __keyAssetsFetchResult;
    PXPhotosDetailsLoadCoordinationToken * __loadCoordinationToken;
    PXMovieProvider * __movieProvider;
    PXPhotosDataSource * __photosDataSource;
    PXUIPlayButtonTile * __playButtonTile;
    bool  __slideshowDidPrepare;
    bool  __slideshowDidStart;
    bool  __slideshowStartingDelayFinished;
    PXUISlideshowViewTile * __slideshowTile;
    OKPresentationViewController * __slideshowViewController;
    PXUITapGestureRecognizer * __tapGestureRecognizer;
    PXTitleSubtitleUILabelTile * __titleTile;
    long long  __transitionAnimationsCount;
    PXPhotosDetailsContext * _context;
    bool  _hasLoadedContentData;
    NSObject<OS_dispatch_queue> * _internalWorkQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyAssetCropRect;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    struct { 
        bool keyAssets; 
        bool assetCollection; 
        bool curatedAssetCollection; 
    }  _needsUpdateFlags;
    PXImageRequester * _primaryAssetImageRequester;
    PXSlideshowSession * _slideshowSession;
    PXWidgetSpec * _spec;
    PXPhotosDetailsHeaderSpecManager * _specManager;
    PXBasicUIViewTileAnimator * _tileAnimator;
    PXReusableObjectPool * _tilePool;
    NSMutableSet * _tilesInUse;
    PXTilingController * _tilingController;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAssetCollection:, nonatomic, retain) PHAssetCollection *_assetCollection;
@property (getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:, nonatomic) bool _basicContentLoaded;
@property (setter=_setCanLoadContentData:, nonatomic) bool _canLoadContentData;
@property (setter=_setCuratedAssetCollection:, nonatomic, retain) PHAssetCollection *_curatedAssetCollection;
@property (setter=_setHeaderSpec:, nonatomic, retain) PXPhotosDetailsHeaderSpec *_headerSpec;
@property (setter=_setHostingViewDidAppear:, nonatomic) bool _hostingViewDidAppear;
@property (setter=_setKeyAssetsFetchResult:, nonatomic, retain) PHFetchResult *_keyAssetsFetchResult;
@property (setter=_setLoadCoordinationToken:, nonatomic, retain) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (setter=_setMovieProvider:, nonatomic, retain) PXMovieProvider *_movieProvider;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (setter=_setPlayButtonTile:, nonatomic, retain) PXUIPlayButtonTile *_playButtonTile;
@property (setter=_setSlideshowDidPrepare:, nonatomic) bool _slideshowDidPrepare;
@property (setter=_setSlideshowDidStart:, nonatomic) bool _slideshowDidStart;
@property (setter=_setSlideshowStartingDelayFinished:, nonatomic) bool _slideshowStartingDelayFinished;
@property (setter=_setSlideshowTile:, nonatomic, retain) PXUISlideshowViewTile *_slideshowTile;
@property (setter=_setSlideshowViewController:, nonatomic, retain) OKPresentationViewController *_slideshowViewController;
@property (setter=_setTapGestureRecognizer:, nonatomic, retain) PXUITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setTitleTile:, nonatomic, retain) PXTitleSubtitleUILabelTile *_titleTile;
@property (setter=_setTransitionAnimationsCount:, nonatomic) long long _transitionAnimationsCount;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (id)_assetCollection;
- (bool)_canLoadContentData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInCoordinateSpace:(id)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)_curatedAssetCollection;
- (void)_didFinishPreparingSlideshowSession:(id)arg1;
- (void)_filterOutVideosFromAssetCollection:(id)arg1 filteredAssetCollection:(id*)arg2 assets:(id*)arg3;
- (id)_headerSpec;
- (void)_headerSpecDidChange;
- (bool)_hostingViewDidAppear;
- (void)_invalidateAssetCollection;
- (void)_invalidateCuratedAssetCollection;
- (void)_invalidateKeyAssets;
- (bool)_isBasicContentLoaded;
- (bool)_isPointWithinCurrentLayoutBounds:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isSlideShowReadyToStart;
- (id)_keyAsset;
- (id)_keyAssetsFetchResult;
- (void)_loadBasicContent;
- (id)_loadCoordinationToken;
- (id)_movieProvider;
- (bool)_needsUpdate;
- (id)_photosDataSource;
- (id)_playButtonTile;
- (void)_prepareSlideshowSessionWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)_scrollViewController;
- (void)_setAssetCollection:(id)arg1;
- (void)_setBasicContentLoaded:(bool)arg1;
- (void)_setCanLoadContentData:(bool)arg1;
- (void)_setCuratedAssetCollection:(id)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setHeaderSpec:(id)arg1;
- (void)_setHostingViewDidAppear:(bool)arg1;
- (void)_setKeyAssetsFetchResult:(id)arg1;
- (void)_setLoadCoordinationToken:(id)arg1;
- (void)_setMovieProvider:(id)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setPlayButtonTile:(id)arg1;
- (void)_setSlideshowDidPrepare:(bool)arg1;
- (void)_setSlideshowDidStart:(bool)arg1;
- (void)_setSlideshowStartingDelayFinished:(bool)arg1;
- (void)_setSlideshowTile:(id)arg1;
- (void)_setSlideshowViewController:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (void)_setTitleTile:(id)arg1;
- (void)_setTransitionAnimationsCount:(long long)arg1;
- (bool)_showPlaceholder;
- (bool)_slideshowDidPrepare;
- (bool)_slideshowDidStart;
- (void)_slideshowStartingDelayDidFinish;
- (bool)_slideshowStartingDelayFinished;
- (id)_slideshowTile;
- (id)_slideshowViewController;
- (void)_startMiroMovie:(id)arg1;
- (void)_startSlideshowIfReady;
- (id)_subtitle;
- (id)_tapGestureRecognizer;
- (void*)_tileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)_title;
- (id)_titleFontName;
- (id)_titleTile;
- (long long)_transitionAnimationsCount;
- (void)_updateAssetCollectionIfNeeded;
- (void)_updateBasicContent;
- (void)_updateCuratedAssetCollectionIfNeeded;
- (void)_updateKeyAssetsIfNeeded;
- (void)_updateLayoutStyle;
- (void)_updateMovieProvider;
- (void)_updateSlideshow;
- (void)_updateSlideshowTile;
- (void)_updateTitleTile;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(id)arg2;
- (long long)contentLayoutStyle;
- (id)contentTilingController;
- (id)context;
- (id)createHeaderSnapshotViewForMemoryCreationAnimation;
- (id)extendedTraitCollection;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (id)init;
- (void)loadContentData;
- (id)localizedTitle;
- (bool)movieProvider:(id)arg1 navigateToMemory:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photosDetailsHeaderTileLayout:(id)arg1 contentsRectForAspectRatio:(double)arg2;
- (id)photosDetailsHeaderTileLayoutFontName:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)slideshowSession:(id)arg1 didPrepareSlideshow:(id)arg2;
- (id)slideshowViewTileHostViewController:(id)arg1;
- (id)spec;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)viewToBeFocused;
- (id)widgetDelegate;
- (void)widgetHostingViewDidAppear:(bool)arg1;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationDidEndWithContext:(id)arg2;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationWillBeginWithContext:(id)arg2;

@end