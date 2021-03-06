//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface fileengine : NSObject
{
}

+ (void)writeFileForDataToEqPath:(id)arg1 withFileName:(id)arg2;
+ (id)downBannerFilePath:(id)arg1;
+ (_Bool)isDownBannerPlistFileExist:(id)arg1;
+ (void)createDownBannerPlistFile:(id)arg1;
+ (int)EnumArchiveFileToObjs:(id)arg1 array:(id *)arg2;
+ (id)ReadArrayFileForText:(id)arg1;
+ (id)readDataFromNetResourcePath:(id)arg1;
+ (void)writeFileToNetResourcePath:(id)arg1 with:(id)arg2;
+ (void)removeOutdateBannerimages:(id)arg1;
+ (id)readDataFromKgImagePath:(id)arg1;
+ (void)writeFileToKgImagePath:(id)arg1 with:(id)arg2;
+ (_Bool)isKgImageFileExist:(id)arg1;
+ (_Bool)isBannerFileExist:(id)arg1;
+ (id)readDataFromBannerImagePath:(id)arg1;
+ (void)writeFileToBannerImagePath:(id)arg1 with:(id)arg2;
+ (id)readDataFromImagePath:(id)arg1;
+ (id)pathFromImagePath:(id)arg1;
+ (_Bool)writeFileToImagePath:(id)arg1 with:(id)arg2;
+ (id)readDataFromLyricPath:(id)arg1;
+ (void)writeFileToLyricPath:(id)arg1 with:(id)arg2;
+ (id)ReadFileForData:(id)arg1;
+ (void)WriteFileForData:(id)arg1 with:(id)arg2;
+ (void)WriteArrayFileForText:(id)arg1 with:(id)arg2;
+ (_Bool)CopyTo:(id)arg1 target:(id)arg2;
+ (_Bool)DeleteFileAtPath:(id)arg1;
+ (_Bool)isFileExistByFullPath:(id)arg1;
+ (int)IsFileExist:(id)arg1;
+ (id)get_filename:(id)arg1;
+ (int)IsDirEmpty:(id)arg1 files:(id *)arg2;
+ (void)CreateDir:(id)arg1;
+ (id)kgEqPath;
+ (id)configPath;
+ (id)netResourcePath;
+ (id)imagePath;
+ (id)lyricPath;
+ (id)libraryCachesPath;
+ (id)tempDirPath;
+ (id)getSkinImagePath;
+ (id)GetDocumentPath;
+ (id)getLibraryPreferencePath;
+ (id)downAdBannerPath;
+ (id)splashPath;
+ (id)themeBackImageDir;
+ (void)InitPath;

@end

