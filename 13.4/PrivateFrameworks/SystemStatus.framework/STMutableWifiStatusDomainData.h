//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemStatus/STWifiStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (_Bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic, getter=isAssociatedToIOSHotspot) _Bool associatedToIOSHotspot; // @dynamic associatedToIOSHotspot;
@property(nonatomic) unsigned long long signalStrengthBars; // @dynamic signalStrengthBars;
@property(nonatomic, getter=isWifiActive) _Bool wifiActive; // @dynamic wifiActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

