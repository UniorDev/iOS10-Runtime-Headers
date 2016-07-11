/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler> {
    IKJSInspectorController * _controller;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildNodeTreeForNode:(id)arg1 depth:(int)arg2;
- (id)_parseAttributeString:(id)arg1;
- (id)controller;
- (void)discardSearchResultsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 searchId:(id)arg3;
- (void)documentUpdated;
- (void)focusWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getAttributesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getDocumentWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getEventListenersForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4;
- (void)getOuterHTMLWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getSearchResultsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 searchId:(id)arg3 fromIndex:(int)arg4 toIndex:(int)arg5;
- (void)hideHighlightWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)highlightFrameWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3 contentColor:(id*)arg4 contentOutlineColor:(id*)arg5;
- (void)highlightNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 highlightConfig:(id)arg3 nodeId:(int*)arg4 objectId:(id*)arg5;
- (void)highlightQuadWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 quad:(id)arg3 color:(id*)arg4 outlineColor:(id*)arg5 usePageCoordinates:(bool*)arg6;
- (void)highlightRectWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 color:(id*)arg7 outlineColor:(id*)arg8 usePageCoordinates:(bool*)arg9;
- (void)highlightSelectorWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 highlightConfig:(id)arg3 selectorString:(id)arg4 frameId:(id*)arg5;
- (id)initWithInspectorController:(id)arg1;
- (void)markUndoableStateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)moveToWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 targetNodeId:(int)arg4 insertBeforeNodeId:(int*)arg5;
- (void)performSearchWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 query:(id)arg3 nodeIds:(id*)arg4;
- (void)pushNodeByBackendIdToFrontendWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 backendNodeId:(int)arg3;
- (void)pushNodeByPathToFrontendWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 path:(id)arg3;
- (void)querySelectorAllWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 selector:(id)arg4;
- (void)querySelectorWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 selector:(id)arg4;
- (void)redoWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)releaseBackendNodeIdsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeGroup:(id)arg3;
- (void)removeAttributeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 name:(id)arg4;
- (void)removeNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)requestChildNodesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 depth:(int*)arg4;
- (void)requestNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 objectId:(id)arg3;
- (void)resolveNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 objectGroup:(id*)arg4;
- (void)setAttributeValueWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 name:(id)arg4 value:(id)arg5;
- (void)setAttributesAsTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 text:(id)arg4 name:(id*)arg5;
- (void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;
- (void)setInspectModeEnabledWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 enabled:(bool)arg3 highlightConfig:(id*)arg4;
- (void)setNodeNameWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 name:(id)arg4;
- (void)setNodeValueWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 value:(id)arg4;
- (void)setOuterHTMLWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 outerHTML:(id)arg4;
- (void)undoWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;

@end