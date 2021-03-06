/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID * _recordIDNeedingFetch;
    CKRecordID * _shareID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKRecordID *recordIDNeedingFetch;
@property (nonatomic, retain) CKRecordID *shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (id)recordIDNeedingFetch;
- (void)setRecordIDNeedingFetch:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (bool)shouldRetryForError:(id)arg1;

@end
