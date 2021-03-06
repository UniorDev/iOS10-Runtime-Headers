/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKRecordZoneManager : NSObject <FCCKRecordZoneDelegate> {
    NSDictionary * _ckRecordZonesByID;
    FCCKDatabase * _database;
    NSDictionary * _fcRecordZonesByName;
    NSArray * _recordZoneIDs;
    FCAsyncSerialQueue * _serialQueue;
}

@property (nonatomic, retain) NSDictionary *ckRecordZonesByID;
@property (nonatomic, retain) FCCKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *fcRecordZonesByName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic, retain) FCAsyncSerialQueue *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ckRecordZonesByID;
- (id)database;
- (void)ensureRecordZoneExistsWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fcRecordZonesByName;
- (id)initWithDatabase:(id)arg1 recordZoneNames:(id)arg2;
- (id)recordZoneIDs;
- (id)recordZoneWithName:(id)arg1;
- (id)serialQueue;
- (void)setCkRecordZonesByID:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setFcRecordZonesByName:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
