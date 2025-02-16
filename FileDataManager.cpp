#include "FileDataManager.h"

System::String^ FileDataManager::GetListPath()
{
    return listPath;
    // TODO: вставьте здесь оператор return
}

System::String^ FileDataManager::GetSettingsPath()
{
    return settingsPath;
   
}

System::String^ FileDataManager::GetDataGridPath()
{
    return dataGridPath;
}

System::String^ FileDataManager::GetPrjectFolder()
{
    return ptojectFolder;
}

System::Void FileDataManager::SetProjectFolder(System::String^ path)
{
    ptojectFolder = path;
}

