//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface CTLocationFencingManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    _Bool isLocationFenceVersionB;
    int _currentAuthorizationStatus;
}

+ (id)sharedInstance;
@property(nonatomic) int currentAuthorizationStatus; // @synthesize currentAuthorizationStatus=_currentAuthorizationStatus;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)buriedPointForPermissionNotAllowRequestData:(_Bool)arg1;
- (void)buriedPointForNoLoadData:(id)arg1 isBackground:(_Bool)arg2;
- (void)buriedPointForShowMsgFail:(id)arg1 eventID:(id)arg2 providerID:(id)arg3 bussinessType:(id)arg4 manager:(id)arg5;
- (void)scheduleFencingEventNotification:(id)arg1 notificationContent:(id)arg2 manager:(id)arg3;
- (void)dealwithLocationFenceEventTriggeredBySystem:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)requestAlwaysLocating;
- (void)initLocationManagerIfNotExist;
- (void)beginGetFencingEventsTaskWhenEnterBackground;
- (_Bool)determineIfAllowBackgroundGetFencingTaskAccordToTime;
- (void)syncRequestFencingEventsDataAndRegisterIfNecessary;
- (void)beginGetFencingEventsForeground;
- (_Bool)determineIfMaxMessageNumForBUAllow:(id)arg1 isAbroad:(_Bool)arg2;
- (_Bool)determineIfInBUTime:(id)arg1;
- (id)figureoutBUStartTimeCode:(id)arg1;
- (id)figureoutBUMessageCode:(id)arg1;
- (_Bool)determineIfMaxMessageNumForNDaysAllow:(_Bool)arg1;
- (_Bool)determineIfInNDays:(_Bool)arg1;
- (_Bool)determineIfMaxMessageNumForPeriodTimeAllow:(_Bool)arg1;
- (_Bool)determineIfInPeriodTime:(_Bool)arg1;
- (_Bool)determineIfMaxMessageNumFor24HoursAllow:(_Bool)arg1;
- (_Bool)determineIfIn24Hours;
- (_Bool)determineIfDateAllowScheduleNotification:(id)arg1 endDate:(id)arg2;
- (_Bool)determineIfEventsTriggeredTimeGreaterOneDay:(id)arg1;
- (_Bool)determineIfEventHasScheduledBefore:(id)arg1;
- (void)saveCurrentTriggerTime:(id)arg1;
- (void)saveFencingEventLastFiredOrTappedTime:(id)arg1;
- (void)deleteOutdatedFencingEventFromCachedList;
- (void)saveMutableCachedContentListToNSDefault:(id)arg1;
- (void)saveMutableCachedListToNSDefault:(id)arg1;
- (id)getMutableCachedContentListFromNSDefault;
- (id)getMutableCachedListFromNSDefault;
- (void)creatCachedFencingListIfNoExist;
- (_Bool)determineIfAllowFencingEvents;
- (_Bool)ifNotificationPermissionAllow;
- (_Bool)ifLocationPermissionAllow;
- (void)cancelOldVersionRegionNotification;
- (void)cancelAllEvent;
- (void)scheduleFencingEventsAndUpdateCache:(id)arg1;
- (void)addLocationFencingEvents:(id)arg1;
- (void)requestDataWithModel:(id)arg1 isBackground:(_Bool)arg2;
- (id)locationDidGetCtripCity;
- (void)updateStartDateForMaxMessaageNum:(id)arg1 date:(id)arg2;
- (id)getStartDateForMaxMessaageNum:(id)arg1;
- (void)initStartDateForMaxMessaageNum:(id)arg1;
- (void)updateMessageCount:(id)arg1;
- (void)updateAllTempMessageCountPlusOne;
- (void)updateTempMessageCount:(id)arg1 count:(id)arg2;
- (id)getTempMessageCount:(id)arg1;
- (void)initTempMessageCount:(id)arg1;
- (id)getSpecifiedValueFormConfigurationList:(id)arg1;
- (void)updateConfigurationValue:(id)arg1 value:(id)arg2;
- (void)saveConfigurationInformationToNSDefault:(id)arg1;
- (id)getConfigurationInformationFromNSDefault;
- (void)initConfigurationList;
- (void)ConfigurationService;
- (void)initAllData;
- (void)abTest;
- (void)addLocationNotification;
- (void)dealloc;
- (void)startLocationFencingManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
