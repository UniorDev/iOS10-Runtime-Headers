/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {
    NSArray * _alternativeTimes;
    BOOL  _availabilityRequestInProgress;
    EKUIInviteeAlternativeTimeSearcher * _availabilitySearcher;
    NSString * _cachedConflictSearchCellReuseIdentifier;
    NSString * _cachedTimeCellReuseIdentifier;
    BOOL  _hasCheckedRow;
    BOOL  _initialSearchInProgress;
    int  _lastCheckedRow;
    unsigned int  _maximumNumberOfTimeSlotsToShow;
    id /* block */  _newTimeChosen;
    unsigned int  _reuseIdentifierVersion;
    NSMutableSet * _rowsShowingAllParticipants;
    BOOL  _searchExhausted;
    id /* block */  _showMoreAlternativeTimesTapped;
    id /* block */  _showPreviewOfEventAtTime;
    id /* block */  _tableViewCellHook;
}

@property (nonatomic, retain) NSArray *alternativeTimes;
@property (nonatomic) BOOL availabilityRequestInProgress;
@property (nonatomic, retain) EKUIInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic, retain) NSString *cachedConflictSearchCellReuseIdentifier;
@property (nonatomic, retain) NSString *cachedTimeCellReuseIdentifier;
@property (nonatomic, readonly) Class customTimeCellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCheckedRow;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int initialNumberOfTimeSlotsToShow;
@property (nonatomic) BOOL initialSearchInProgress;
@property (nonatomic) int lastCheckedRow;
@property (nonatomic) unsigned int maximumNumberOfTimeSlotsToShow;
@property (nonatomic, copy) id /* block */ newTimeChosen;
@property (nonatomic) unsigned int reuseIdentifierVersion;
@property (nonatomic, retain) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic) BOOL searchExhausted;
@property (nonatomic, readonly) NSArray *searcherTimeSlots;
@property (nonatomic, readonly) BOOL searchingForMoreTimes;
@property (nonatomic, copy) id /* block */ showMoreAlternativeTimesTapped;
@property (nonatomic, copy) id /* block */ showPreviewOfEventAtTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;

- (void).cxx_destruct;
- (id)_alternativeTimeAtIndex:(int)arg1;
- (BOOL)_isConflictSearchRow:(int)arg1;
- (BOOL)_isValidRow:(int)arg1;
- (unsigned int)_numberOfTimeSlotsShown;
- (id)alternativeTimes;
- (BOOL)availabilityRequestInProgress;
- (id)availabilitySearcher;
- (void)availabilitySearcherChangedState:(int)arg1;
- (id)cachedConflictSearchCellReuseIdentifier;
- (id)cachedTimeCellReuseIdentifier;
- (BOOL)canEditRow:(id)arg1;
- (BOOL)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)clearCheckmark;
- (void)commitEditingStyle:(int)arg1 forRow:(id)arg2;
- (Class)customTimeCellClass;
- (id)debugTitle;
- (int)editingStyleForRow:(id)arg1;
- (float)estimatedHeightForRow:(id)arg1;
- (BOOL)hasCheckedRow;
- (id)headerTitle;
- (id)init;
- (unsigned int)initialNumberOfTimeSlotsToShow;
- (BOOL)initialSearchInProgress;
- (BOOL)injectNewRowsBeforeLastExistingRow;
- (int)lastCheckedRow;
- (unsigned int)maximumNumberOfTimeSlotsToShow;
- (id /* block */)newTimeChosen;
- (unsigned int)numberOfRows;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned int)reuseIdentifierVersion;
- (id)rowsShowingAllParticipants;
- (BOOL)searchExhausted;
- (void)searchForMoreTimes;
- (id)searcherTimeSlots;
- (BOOL)searchingForMoreTimes;
- (BOOL)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAlternativeTimes:(id)arg1;
- (void)setAvailabilityRequestInProgress:(BOOL)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setCachedConflictSearchCellReuseIdentifier:(id)arg1;
- (void)setCachedTimeCellReuseIdentifier:(id)arg1;
- (void)setHasCheckedRow:(BOOL)arg1;
- (void)setInitialSearchInProgress:(BOOL)arg1;
- (void)setLastCheckedRow:(int)arg1;
- (void)setMaximumNumberOfTimeSlotsToShow:(unsigned int)arg1;
- (void)setNewTimeChosen:(id /* block */)arg1;
- (void)setReuseIdentifierVersion:(unsigned int)arg1;
- (void)setRowsShowingAllParticipants:(id)arg1;
- (void)setSearchExhausted:(BOOL)arg1;
- (void)setShowMoreAlternativeTimesTapped:(id /* block */)arg1;
- (void)setShowPreviewOfEventAtTime:(id /* block */)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (id /* block */)showMoreAlternativeTimesTapped;
- (id /* block */)showPreviewOfEventAtTime;
- (id /* block */)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;

@end