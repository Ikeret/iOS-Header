//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSAApplicationPropertiesProvider.h>

@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider
{
}

- (id)bladerunnerContainerIdentifier;
- (id)cloudKitSyncContainerIdentifier;
- (id)cloudKitContainerIdentifier;
@property(readonly, nonatomic) NSArray *powerPointDocumentTypes;
- (id)importableDocumentTypes;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (unsigned long long)applicationType;
- (id)applicationDisplayName;
- (id)applicationName;

@end

